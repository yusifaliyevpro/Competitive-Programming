import os
import re
import requests
from bs4 import BeautifulSoup

url = 'https://cses.fi/problemset/list/'
response = requests.get(url)
soup = BeautifulSoup(response.text, 'html.parser')
folders = soup.select('.content-wrapper .content h2')[1:]
cpp_template = '''#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    return 0;
}
'''
s=0
for i in range(len(folders)):
    folder_name = str(i+1) + ". " + folders[i].get_text().strip()
    sanitized_folder_name = re.sub(r'[<>:"/\\|?*]', '', folder_name)
    output_dir = os.path.join('cses1', sanitized_folder_name)
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)
    questions = soup.select('.content-wrapper .content ul')[1:][i].select("li a")
    for question in questions:
        s+=1
        question_text = question.get_text()
        filename = os.path.join(output_dir, f'{s}. {question_text}.cpp')
        with open(filename, 'w') as f:
            f.write(f'// {s}. {question_text}\n')
            f.write(f'// https://cses.fi{question.get("href")}\n\n')
            f.write(cpp_template)

    print(f'{filename} created.')

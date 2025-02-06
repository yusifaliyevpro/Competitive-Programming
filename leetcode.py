import os
import requests
import json
import re

# LeetCode API URL
api_url = "https://leetcode.com/api/problems/all/"
headers = {"User-Agent": "Mozilla/5.0"}

# API isteği yap ve JSON verisini al
response = requests.get(api_url, headers=headers)
data = response.json()

# Leetcode klasörü oluştur
folder_name = "LLL"
os.makedirs(folder_name, exist_ok=True)

# Easy seviyesindeki ücretsiz soruları filtrele
easy_problems = [
    problem for problem in data["stat_status_pairs"]
    if problem["difficulty"]["level"] == 3 and not problem["paid_only"]
]

# GraphQL API ile her sorunun C++ şablonunu almak için fonksiyon
def get_cpp_template(slug):
    graphql_url = "https://leetcode.com/graphql"
    query = {
        "query": """
        query questionEditorData($titleSlug: String!) {
            question(titleSlug: $titleSlug) {
                codeSnippets {
                    lang
                    code
                }
            }
        }
        """,
        "variables": {"titleSlug": slug},
    }

    response = requests.post(graphql_url, json=query, headers=headers)
    if response.status_code == 200:
        data = response.json()
        snippets = data.get("data", {}).get("question", {}).get("codeSnippets", [])
        for snippet in snippets:
            if snippet["lang"] == "C++":
                return snippet["code"]  # C++ kod şablonunu döndür
    return None  # Eğer C++ şablonu yoksa None döndür

# Kütüphane ekleme fonksiyonu
def add_required_headers(cpp_code):
    base_header = "#include <iostream>\n"
    extra_headers = set()

    # Eğer kodda vector, unordered_map, string vb. geçiyorsa kütüphaneleri ekle
    if "vector<" in cpp_code:
        extra_headers.add("#include <vector>")
    if "unordered_map<" in cpp_code:
        extra_headers.add("#include <unordered_map>")
    if "set<" in cpp_code:
        extra_headers.add("#include <set>")
    
    return base_header + "\n".join(extra_headers) + ("\n" if extra_headers else "") +"using namespace std;" + "\n\n" + cpp_code

# Easy soruları işle
for problem in easy_problems:
    question_id = str(problem["stat"]["frontend_question_id"]).strip()  # Soru numarası
    title = str(problem["stat"]["question__title"]).strip()
    slug = str(problem["stat"]["question__title_slug"]).strip()
    link = f"https://leetcode.com/problems/{slug}/"

    # C++ şablonunu al
    cpp_template = get_cpp_template(slug)
    if not cpp_template:
        cpp_template = "// No C++ template available.\n"

    # Zorunlu kütüphaneleri ekleyerek kodu güncelle
    cpp_template = add_required_headers(cpp_template)

    # Dosya ismini oluştur: "1. Two Sum.cpp" gibi
    file_name = f"{question_id}. {title}.cpp"
    sanitized_file_name = re.sub(r'[<>:"/\\|?*]', '', file_name)
    file_path = os.path.join(folder_name, sanitized_file_name)

    # Dosya oluştur ve içine C++ kod şablonunu yaz
    with open(file_path, "w", encoding="utf-8") as file:
        file.write(f"// {question_id}. {title}\n// {link}\n\n")
        file.write(cpp_template)

    print(f"Created: {sanitized_file_name}")

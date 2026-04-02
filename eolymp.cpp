#include <iostream>
using namespace std;

int main()
{
    int prev, cnt;
    prev = cnt = 0;
    string s;
    getline(cin, s);
    for (char c : s)
    {
        if ((c == '.' || c == '!' || c == '?') && !(prev == '.' || prev == '!' || prev == '?'))
            cnt++;
        prev = c;
    }
    cout << cnt;
}
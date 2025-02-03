// 12. Palindrome Reorder
// https://cses.fi/problemset/task/1755

#include <iostream>
using namespace std;

char toChar(int n) { return (char)(n + 'A'); }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long A[32] = {0};
    string s;
    unsigned long long n, i, t = 0;
    int idx;
    cin >> s;
    n = s.size();
    for (i = 0; i < n; i++)
        A[(int)(s[i] - 'A')]++;
    for (int i = 0; i < 32; i++)
        if (A[i] % 2 != 0)
        {
            t++;
            if (t == 2)
                break;
            idx = i;
        }
    s = "";
    if (t == 1)
        s = (char)(idx + 'A');
    if (t == 2)
        cout << "NO SOLUTION";
    else
    {
        for (int i = 0; i < 32; i++)
            s = string(A[i] / 2, toChar(i)) + s + string(A[i] / 2, toChar(i));
        cout << s;
    }
    return 0;
}

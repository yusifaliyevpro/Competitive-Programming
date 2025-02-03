// 3. Repetitions
// https://cses.fi/problemset/task/1069

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    long long max = 1, i, t = 1, n = s.size();
    for (i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
            t++;
        else
            t = 1;
        if (max < t)
            max = t;
    }
    cout << max;
}
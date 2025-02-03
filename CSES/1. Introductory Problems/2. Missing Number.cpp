// 2. Missing Number
// https://cses.fi/problemset/task/1083

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, i, t, s = 0;
    cin >> n;
    s -= (n * (n + 1)) / 2;
    for (i = 1; i < n; i++)
    {
        cin >> t;
        s += t;
    }
    cout << -s;
}
// 9. Bit Strings
// https://cses.fi/problemset/task/1617

#include <iostream>
using namespace std;

long long power(long long base, long long expo)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long ans = 1;
    long long MOD = 1e9 + 7;
    while (expo)
    {
        if (expo & 1LL)
        {
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        expo >>= 1LL;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long n;
    cin >> n;
    n = power(2LL, n);
    cout << n;
    return 0;
}
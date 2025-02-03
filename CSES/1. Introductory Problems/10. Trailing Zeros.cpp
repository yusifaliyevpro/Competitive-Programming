// 10. Trailing Zeros
// https://cses.fi/problemset/task/1618

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, s = 0;
    cin >> n;
    while (n >= 5)
    {
        s += n / 5;
        n = n / 5;
    }
    cout << s;
    return 0;
}

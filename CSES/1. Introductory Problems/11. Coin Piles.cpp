// 11. Coin Piles
// https://cses.fi/problemset/task/1754

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t, a, b, i;
    cin >> t;
    while (cin >> a >> b)
    {
        t = a;
        a = (2 * a - b);
        b = (2 * b - t);
        if (a % 3 || b % 3 || a < 0 || b < 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}

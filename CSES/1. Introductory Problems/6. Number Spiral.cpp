// 6. Number Spiral
// https://cses.fi/problemset/task/1071

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, x, y, t;
    cin >> t;
    while (cin >> y >> x)
    {
        if (x < y)
        {
            n = (y - 1) * (y - 1);
            if (y % 2 != 0)
                cout << n + x << endl;
            else
                cout << n + (2 * y - x) << endl;
        }
        else
        {
            n = (x - 1) * (x - 1);
            if (x % 2 == 0)
                cout << n + y << endl;
            else
                cout << n + (2 * x - y) << endl;
        }
    }

    return 0;
}
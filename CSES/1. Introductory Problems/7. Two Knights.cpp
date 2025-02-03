// 7. Two Knights
// https://cses.fi/problemset/task/1072

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, k, t;
    cin >> n;
    for (k = 1; k <= n; k++)
    {
        t = (k * k * (k * k - 1)) / 2 - 4 * (k - 1) * (k - 2);
        cout << t << endl;
    }
    return 0;
}

// 4. Increasing Array
// https://cses.fi/problemset/task/1094

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long i, n, max, t2, s = 0;
    cin >> n;
    cin >> max;
    for (i = 1; i < n; i++)
    {
        cin >> t2;
        if (max > t2)
            s += (max - t2);
        else
            max = t2;
    }
    cout << s;
    return 0;
}

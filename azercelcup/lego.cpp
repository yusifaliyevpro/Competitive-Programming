#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n, p, i, j, t, a, s = 0;
    bool swapped;
    cin >> n >> p;
    vector<long long> c;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        a += t;
        c.push_back(t);
    }
    if (n == 0 || p == 0)
        s = 0;
    else if (a <= p)
        s = c.size();
    else
    {
        sort(c.begin(), c.end());
        t = c[0];
        while (p >= t && n != s)
        {
            c.erase(c.begin());
            if (p >= t)
            {
                s++;
                p -= t;
            }
            t = c[0];
        }
    }
    cout << s;
}
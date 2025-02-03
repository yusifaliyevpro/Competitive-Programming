// 8. Two Sets
// https://cses.fi/problemset/task/1092

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, s, a = 0;
    vector<int> A, B, T;
    cin >> n;
    s = (n * (n + 1)) / 2;
    if (s % 2 != 0)
        cout << "NO";
    else
    {
        cout << "YES" << endl;
        while (a < s / 2)
        {
            if ((a + n) <= s / 2)
            {
                a += n;
                A.push_back(n);
            }
            else
                B.push_back(n);
            n--;
        }
        while (n > 0)
        {
            B.push_back(n);
            n--;
        }
        cout << A.size() << endl;
        for (auto x : A)
            cout << x << " ";
        cout << endl;
        cout << B.size() << endl;
        for (auto x : B)
            cout << x << " ";
    }
    return 0;
}
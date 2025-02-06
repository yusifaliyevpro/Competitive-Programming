#include <iostream>
using namespace std;

int main()
{
    int t;
    long long x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x == 8 || x >= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
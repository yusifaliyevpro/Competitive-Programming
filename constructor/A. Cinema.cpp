#include <iostream>
using namespace std;

int main()
{
    int t, a1, a2, b1, b2, c1, c2;
    cin >> t;
    while (t--)
    {
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        int minn = max(max(a1, b1), c1);
        int maxx = min(min(a2, b2), c2);
        if (minn <= maxx)
            cout << minn << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
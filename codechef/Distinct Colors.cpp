#include <iostream>
using namespace std;

int main()
{
    int t, n, i, temp;
    cin >> t;
    while (t--)
    {
        int maxx = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (maxx < temp)
                maxx = temp;
        }
        cout << maxx << endl;
    }

    return 0;
}
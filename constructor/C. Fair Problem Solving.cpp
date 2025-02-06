#include <iostream>
using namespace std;

int main()
{
    int t, n, A, B, d;
    cin >> t;
    while (t--)
    {
        cin >> n >> A >> B;
        if (A > B)
            swap(A, B);
        int a = 0, b = 0;
        while (n--)
        {
            cin >> d;
            if (d <= A)
                a++;
            else if (d <= B)
                b++;
        }
        if (a > b)
            cout << (a + b) / 2 * 2 << endl;
        else
            cout << min(a, b) * 2 << endl;
    }

    return 0;
}
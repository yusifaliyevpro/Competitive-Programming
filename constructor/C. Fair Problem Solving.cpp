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
        cout << 2 * (a > b ? (a + b) / 2 : min(a, b)) << endl;
    }

    return 0;
}
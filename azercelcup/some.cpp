#include <iostream>
using namespace std;

int main()
{
    long long n, i;
    cin >> n;

    if (n == 2 || n == 3 || n == 4 || n == 5)
        cout << "impossible";
    else
    {
        for (i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    long long x, s;
    bool a = true;
    cin >> x;
    for (int i = x + 1;; i++)
    {
        if (i == 2 || i == 3)
        {
            cout << i;
            return 0;
        }
        else if (i % 2 == 0 || i % 3 == 0)
            continue;
        else
        {
            for (int j = 5; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    a = false;
                    break;
                }
            }
            if (a)
            {
                cout << i;
                return 0;
            }
            a = true;
        }
    }

    return 0;
}
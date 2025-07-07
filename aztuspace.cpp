#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long x, n, t = 1;
    cin >> x >> n;
    // x = 2, n = 10
    while (n != 0)
    {
        if (n % 2 == 1)
            t *= x;
        x *= x;
        n /= 2;
    }
    cout << t;
}

/*

base case: 2 ^ 10

1. x = 4 ^ 5

2. t = 4;  16 ^ 2


3. x = 256 ^ 1


4. t = 256 * 4 = 1024



log n = log n = 3.128263 = (3)
*/
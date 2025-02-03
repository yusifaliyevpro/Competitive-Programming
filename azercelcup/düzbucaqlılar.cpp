#include <iostream>
using namespace std;

int main()
{
    long long n, s = 0;
    cin >> n;
    s += n;
    for (long long i = 2; i * i <= n; i++)
        s += n / i - (i - 1);
    cout << s;
    return 0;
}
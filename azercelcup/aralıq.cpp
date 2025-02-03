#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, m, a, b, s = 0;
    cin >> n >> m;
    a = to_string(n).size();
    b = to_string(m).size();
    if (a == b)
        s = (m - n + 1) * a;
    else
    {
        s += (pow(10, a) - n) * a;
        a++;
        for (; a != b; a++)
        {
            s += (pow(10, a) - pow(10, a - 1)) * a;
        }
        s += (m - pow(10, b - 1) + 1) * b;
    }
    cout << s;
    return 0;
}
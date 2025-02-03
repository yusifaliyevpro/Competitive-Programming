#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (c == b)
        swap(a, c);
    else if ((b * b + c * c) == a * a)
        swap(a, c);
    else if ((a * a + c * c) == b * b)
        swap(b, c);
    a = (a * b) / 2;
    cout << a;
    return 0;
}
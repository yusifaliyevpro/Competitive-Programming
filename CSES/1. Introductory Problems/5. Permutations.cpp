// 5. Permutations
// https://cses.fi/problemset/task/1070

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, i;
    cin >> n;
    if (n < 4 && n != 1)
        cout << "NO SOLUTION";
    else
    {
        for (i = 2; i <= n; i += 2)
            cout << i << " ";
        for (i = 1; i <= n; i += 2)
            cout << i << " ";
    }
    return 0;
}
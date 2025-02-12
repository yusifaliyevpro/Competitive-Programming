#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        sort(A.begin(), A.end());
        int m = A[n - 1];
        for (int i = 0; i < n - 1; i += 2)
            if (A[i] != A[i + 1])
            {
                m = A[i];
                break;
            }
        cout << m << endl;
    }

    return 0;
}
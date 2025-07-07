#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k, s = 1;
    cin >> n;
    int A[n][n] = {0};
    i = 0, j = 0, k = n - 1;
    while (s <= n * n)
    {
        while (j <= k)
            A[i][j++] = s++;
        i++, j--;
        while (i <= k)
            A[i++][j] = s++;
        i--, j--;
        while (j >= n - k - 1)
            A[i][j--] = s++;
        k--, j++, i--;
        while (i >= n - k - 1)
            A[i--][j] = s++;
        i++, j++;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
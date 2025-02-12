#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, d, count = 0;
    cin >> n >> d;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A.begin(), A.end());
    for (int i = 0; i < n; i++)
        if (abs(A[i] - A[i + 1]) <= d)
        {
            count++;
            i++;
        }
    cout << count << endl;
    return 0;
}
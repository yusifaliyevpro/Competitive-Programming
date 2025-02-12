#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t, n, i, temp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        unordered_map<int, int> A;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            A[temp]++;
        }
        int maxx = 0;
        for (auto &x : A)
            if (maxx < x.second)
                maxx = x.second;
        cout << n - maxx << endl;
    }

    return 0;
}
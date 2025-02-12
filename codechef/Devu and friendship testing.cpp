#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int t, n, i, temp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        unordered_set<int> A;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            A.insert(temp);
        }
        cout << A.size() << endl;
    }

    return 0;
}
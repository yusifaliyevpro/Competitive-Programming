#include <iostream>
#include <unordered_set>
using namespace std;

// 0 1 < >
int main()
{
    int t, a, b;
    string s;
    cin >> t;
    while (t--)
    {
        int A[4] = {0};
        cin >> s;
        int n = s.length();
        for (char c : s)
            if (c == '0')
                A[0]++;
            else if (c == '1')
                A[1]++;
            else if (c == '<')
                A[2]++;
            else
                A[3]++;
        int m = (n + 1) / 2;
        int k = (n - 1) / 2;
        bool a, b;
        if (m % 2 == 1)
            a = (abs(A[0] - A[1]) == 1);
        else
            a = (A[0] == A[1]);

        if (k % 2 == 0)
            b = (A[2] == k / 2 && A[3] == k / 2);
        else
            b = (abs(A[2] - A[3]) == 1);

        cout << ((a && b) ? "YES" : "NO") << endl;
    }
    return 0;
}
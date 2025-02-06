// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int n = 3;
//     vector<vector<int>> A = {{5, 4, 7}, {1, 3, 8}, {2, 9, 6}};

//     vector<int> B;

//     // 2D Matrixi tək massivə keçiririk. (A->B)
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             B.push_back(A[i][j]);

//     // Sort edirik və siyahını tərsinə çeviririk
//     sort(B.begin(), B.end());
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//         {
//             A[i][j] = *(B.end() - 1);
//             B.pop_back();
//         }
//     for (auto x : A)
//     {
//         for (int j : x)
//             cout << j << " ";
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void sort(vector<vector<int>> &v)
{
    int n = v.size(), m = v[0].size();
    vector<vector<int>> vt(m, vector<int>(n));

    // First sort every rows of original vector
    for (auto &i : v)
    {
        sort(i.begin(), i.end());
        reverse(i.begin(), i.end());
    }

    // Create transpose vector
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            vt[j][i] = v[i][j];

    // Sort every rows of new vector (original columns
    for (auto &i : vt)
        sort(i.begin(), i.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            v[i][j] = vt[j][i];
    }

    return;
}

int main()
{
    vector<vector<int>> v = {{3, 5, 3},
                             {1, 3, 2},
                             {7, 4, 8}};
    sort(v);

    for (auto i : v)
    {
        for (int j : i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}
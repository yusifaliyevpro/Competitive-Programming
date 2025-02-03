// 14. Tower of Hanoi
// https://cses.fi/problemset/task/2165

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, i;
    cin >> n;
    stack<int> L;
    stack<int> M;
    stack<int> R;
    for (i = 1; i <= n; i++)
        L.push(i);

    return 0;
}

/*
            13      12      32      13      21      23      13
Mov  0      1       2       3       4       5       6        7

L   321     32      3       3               1       1       
M                   2       21      21      2               
R           1       1               3       3       32      321
*/
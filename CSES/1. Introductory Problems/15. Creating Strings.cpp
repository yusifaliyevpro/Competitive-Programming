// 15. Creating Strings
// https://cses.fi/problemset/task/1622

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    set<string> A = {s};
    while (next_permutation(s.begin(), s.end()))
        A.insert(s);
    cout << A.size() << endl;
    for (string i : A)
        cout << i << endl;
    return 0;
}

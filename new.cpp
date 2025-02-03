#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

double medianOf2(vector<int> &a, vector<int> &b)
{
    int n = a.size(), m = b.size();
    if (n > m)
        return medianOf2(b, a);

    int lo = 0, hi = n;
    while (lo <= hi)
    {
        int mid1 = (lo + hi) / 2;
        int mid2 = (n + m + 1) / 2 - mid1;

        int l1 = (mid1 == 0 ? INT_MIN : a[mid1 - 1]);
        int r1 = (mid1 == n ? INT_MAX : a[mid1]);

        int l2 = (mid2 == 0 ? INT_MIN : b[mid2 - 1]);
        int r2 = (mid2 == m ? INT_MAX : b[mid2]);

        if (l1 <= r2 && l2 <= r1)
        {
            if ((n + m) % 2 == 0)
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            else
                return max(l1, l2);
        }

        if (l1 > r2)
            hi = mid1 - 1;
        else
            lo = mid1 + 1;
    }
    return 0;
}

int main()
{
    vector<int> a = {1, 12, 15, 26, 38};
    vector<int> b = {2, 13, 17, 30, 45, 60};

    cout << medianOf2(a, b);
    return 0;
}
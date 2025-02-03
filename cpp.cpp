#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // (n <= m) şərti ödənilməlidir
    vector<int> a = {1, 12, 15, 26, 38};
    vector<int> b = {2, 13, 17, 30, 45, 60};

    int n = a.size(), m = b.size(); // n = 5  m = 6
    int low = 0, high = n, i = 0;   // high = 5

    while (low <= high)
    {
        i++;
        // low = 3  high = 3
        // Yeni low və high dəyərlərinə uyğun pivotlar təyin edirik
        int mid1 = (low + high) / 2;       // (3 + 3)/2 = 3
        int mid2 = (n + m + 1) / 2 - mid1; // (5 + 6 + 1)/2 - 3 = 3

        // a[] massivində pivotun sol və sağındakı elementlər
        int l1 = (mid1 == 0 ? INT_MIN : a[mid1 - 1]); // 15
        int r1 = (mid1 == n ? INT_MAX : a[mid1]);     // 26

        // b[] massivində pivotun sol və sağındakı elementlər
        int l2 = (mid2 == 0 ? INT_MIN : b[mid2 - 1]); // 17
        int r2 = (mid2 == m ? INT_MAX : b[mid2]);     // 30

        if (l1 <= r2 && l2 <= r1)
        {
            cout << i << "-ci dovr";
            // Əgər n + m cüt ədəddirsə, orta elementlərin ədədi ortasını çap edirik
            if ((n + m) % 2 == 0)
                cout
                    << (max(l1, l2) + min(r1, r2)) / 2.0;
            // n + m təkdirsə, orta elementi çap edirik
            else
                cout << max(l1, l2);
            break;
        }

        // Əvvəlki if şərti düzgün olmadığı üçün a[] massivindən
        //  daha kiçik elementlər götürməli olub-olmadığımızı yoxlayırıq
        if (l1 > r2)         // (26 > 17) -> true
            high = mid1 - 1; // (4 - 1) = 3

        // Əks halda a[] massivindən daha böyük elementlər götürürük
        else
            low = mid1 + 1;
    }
    return 0;
}
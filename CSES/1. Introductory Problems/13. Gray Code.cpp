// 13. Gray Code
// https://cses.fi/problemset/task/2205

#include <iostream>
#include <vector>
using namespace std;

vector<string> generateGrayCode(int n)
{
    if (n == 1)
        return {"0", "1"};
    vector<string> prevGrayCode = generateGrayCode(n - 1);
    vector<string> reversedPrevGrayCode = prevGrayCode;
    reverse(reversedPrevGrayCode.begin(), reversedPrevGrayCode.end());
    int prevSize = prevGrayCode.size();
    int index = 0;
    while (index < prevSize)
    {
        string appendedZero = "0" + prevGrayCode[index];
        prevGrayCode[index] = "1" + reversedPrevGrayCode[index];
        prevGrayCode.push_back(appendedZero);
        index++;
    }
    return prevGrayCode;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> grayCode = generateGrayCode(n);
    for (auto code : grayCode)
        cout << code << endl;
    return 0;
}

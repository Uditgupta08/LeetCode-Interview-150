#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &a)
{
    int n = a.size();
    if (n == 1)
    {
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            ans += (a[i + 1] - a[i]);
        }
    }
    return ans;
}
int main()
{
    vector<int> a = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(a) << endl;
}
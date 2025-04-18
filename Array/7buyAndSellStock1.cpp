// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &a)
{
    int mini = a[0], ans = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] < mini)
        {
            mini = a[i];
        }
        ans = max(ans, a[i] - mini);
    }
    return ans;
}
int main()
{
    vector<int> a = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(a) << endl;
}
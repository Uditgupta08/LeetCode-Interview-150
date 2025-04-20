// https://leetcode.com/problems/triangle/

#include <bits/stdc++.h>
using namespace std;
int minimumTotal(vector<vector<int>> &a)
{
    int n = a.size();
    vector<int> dp(n);
    dp = a[n - 1];
    int ans = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            dp[j] = min(dp[j], dp[j + 1]);
            dp[j] += a[i][j];
        }
    }
    return dp[0];
}
int main()
{
    vector<vector<int>> a = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    cout << minimumTotal(a) << endl;
}
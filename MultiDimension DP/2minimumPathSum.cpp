// https://leetcode.com/problems/minimum-path-sum/

#include <bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int>> &a)
{
    int m = a.size();
    int n = a[0].size();
    vector<int> prev(n, INT_MAX);
    prev[0] = a[0][0];
    for (int i = 0; i < m; i++)
    {
        vector<int> curr(n, INT_MAX);
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
            {
                curr[j] = a[0][0];
            }
            else
            {
                int up = INT_MAX, left = INT_MAX;
                if (i > 0)
                    up = a[i][j] + prev[j];
                if (j > 0)
                    left = a[i][j] + curr[j - 1];
                curr[j] = min(up, left);
            }
        }
        prev = curr;
    }
    return prev[n - 1];
}
int main()
{
    vector<vector<int>> a = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    // vector<vector<int>> a = {{-10}};
    cout << minPathSum(a) << endl;
}
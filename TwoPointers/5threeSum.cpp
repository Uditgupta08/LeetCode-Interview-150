// https://leetcode.com/problems/3sum/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &a)
{
    vector<vector<int>> ans;
    int n = a.size();
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            int sum = a[i] + a[l] + a[r];
            if (sum == 0)
            {
                ans.push_back({a[i], a[l], a[r]});
                l++;
                r--;
                while (l < r && a[l] == a[l - 1])
                    l++;
                while (l < r && a[r] == a[r + 1])
                    r--;
            }
            else if (sum < 0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> a = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(a);
    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
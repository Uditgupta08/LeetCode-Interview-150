// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &a, int val)
{
    int i = 0;
    int j = a.size() - 1;
    while (i < j)
    {
        if (a[i] + a[j] == val)
        {
            return {i + 1, j + 1};
        }
        else if (a[i] + a[j] > val)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {};
}
int main()
{
    vector<int> a = {2, 7, 11, 15};
    vector<int> ans = twoSum(a, 9);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
// https://leetcode.com/problems/candy/

#include <bits/stdc++.h>
using namespace std;
int candy(vector<int> &a)
{
    int n = a.size();
    vector<int> ans(n, 1);
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] < a[i] && ans[i - 1] >= ans[i])
        {
            ans[i] = ans[i - 1] + 1;
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i + 1] < a[i] && ans[i + 1] >= ans[i])
        {
            ans[i] = ans[i + 1] + 1;
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ans[i];
    }
    return sum;
}
int main()
{
    vector<int> a = {1, 0, 2};
    cout << candy(a) << endl;
}
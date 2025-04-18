// https://leetcode.com/problems/h-index/

#include <bits/stdc++.h>
using namespace std;
int hIndex(vector<int> &h)
{
    sort(begin(h), end(h), greater<int>());
    int n = h.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (h[i] > ans)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> a = {3, 0, 6, 1, 5};
    cout << hIndex(a) << endl;
}
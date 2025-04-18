// https://leetcode.com/problems/container-with-most-water/

#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &h)
{
    int i = 0;
    int j = h.size() - 1;
    int dist = j;
    int maxi = INT_MIN;
    while (i < j)
    {
        maxi = max(maxi, min(h[i], h[j]) * dist);
        if (h[i] < h[j])
        {
            i++;
        }
        else
        {
            j--;
        }
        dist--;
    }
    return maxi;
}
int main()
{
    vector<int> a = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(a) << endl;
}
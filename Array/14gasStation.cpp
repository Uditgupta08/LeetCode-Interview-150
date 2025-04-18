// https://leetcode.com/problems/gas-station/

#include <bits/stdc++.h>
using namespace std;
int canCompleteCircuit(vector<int> &g, vector<int> &c)
{
    int ans = 0, curr = 0, ind = 0;
    for (int i = 0; i < g.size(); i++)
    {
        int rem = g[i] - c[i];
        ans += rem;
        curr += rem;
        if (curr < 0)
        {
            ind = i + 1;
            curr = 0;
        }
    }
    if (ans >= 0)
    {
        return ind;
    }
    return -1;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> c = {3, 4, 5, 1, 2};
    cout << canCompleteCircuit(a, c) << endl;
}
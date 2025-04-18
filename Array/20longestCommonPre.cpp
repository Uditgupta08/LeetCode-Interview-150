// https://leetcode.com/problems/longest-common-prefix/

#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";
    for (int i = 0; i < strs[0].size(); i++)
    {
        char curr = strs[0][i];
        bool check = true;
        for (int j = 1; j < strs.size(); j++)
        {
            if (strs[j][i] != curr)
            {
                check = false;
            }
        }
        if (!check)
        {
            return ans;
        }
        ans = ans + curr;
    }
    return ans;
}
int main()
{
    vector<string> a = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(a) << endl;
}
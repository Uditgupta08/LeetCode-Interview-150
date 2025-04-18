// https://leetcode.com/problems/is-subsequence/

#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    if (s.size() > t.size())
    {
        return false;
    }
    int i = 0;
    int j = 0;
    while (j < t.size())
    {
        if (s[i] == t[j])
        {
            i++;
        }
        j++;
    }
    if (i == s.size())
    {
        return true;
    }
    return false;
}
int main()
{
    cout << isSubsequence("abc", "ahbgdc") << endl;
}
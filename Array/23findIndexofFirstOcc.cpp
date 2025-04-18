// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

#include <bits/stdc++.h>
using namespace std;
int strStr(string h, string n)
{
    if (n.size() > h.size())
    {
        return -1;
    }
    int s = h.size();
    for (int i = 0; i <= s - n.size(); i++)
    {
        string curr = h.substr(i, n.size());
        if (curr == n)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string a = "Hello World";
    string b = "Hello";
    cout << strStr(a, b) << endl;
}
// https://leetcode.com/problems/reverse-words-in-a-string/

#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    int n = s.length();
    string a;
    int j = n - 1;
    while (j >= 0)
    {
        while (j >= 0 && s[j] == ' ')
        {
            j--;
        }
        if (j < 0)
        {
            break;
        }
        int ind = j;
        while (ind >= 0 && s[ind] != ' ')
        {
            ind--;
        }
        if (a.empty())
        {
            a = s.substr(ind + 1, j - ind);
        }
        else
        {
            a += " " + s.substr(ind + 1, j - ind);
        }
        j = ind - 1;
    }
    return a;
}
int main()
{
    string a = "Hello World";
    cout << reverseWords(a) << endl;
}
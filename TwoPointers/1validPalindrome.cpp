// https://leetcode.com/problems/valid-palindrome/

#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    bool check = false;
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        while (i < j && !isalnum(s[i]))
        {
            i++;
        }
        while (i < j && !isalnum(s[j]))
        {
            j--;
        }
        if (tolower(s[i]) != tolower(s[j]))
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    cout << isPalindrome("A man, a plan, a canal: Panama") << endl;
}
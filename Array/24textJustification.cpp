// https://leetcode.com/problems/text-justification/description

#include <bits/stdc++.h>
using namespace std;
vector<string> fullJustify(vector<string> &words, int maxWidth)
{
    vector<string> ans;
    int i = 0, n = words.size();
    while (i < n)
    {
        int l = words[i].size();
        int j = i + 1;
        while (j < n && l + 1 + words[j].size() <= maxWidth)
        {
            l += 1 + words[j].size();
            j++;
        }
        int count = j - i;
        int totalChars = 0;
        for (int k = i; k < j; ++k)
        {
            totalChars += words[k].size();
        }
        int totalSpaces = maxWidth - totalChars;
        string line;
        if (j == n || count == 1)
        {
            for (int k = i; k < j; ++k)
            {
                line += words[k];
                if (k != j - 1)
                    line += " ";
            }
            line += string(maxWidth - line.size(), ' ');
        }
        else
        {
            int spaces = totalSpaces / (count - 1);
            int extra = totalSpaces % (count - 1);
            for (int k = i; k < j; ++k)
            {
                line += words[k];
                if (k != j - 1)
                {
                    line += string(spaces + (extra-- > 0 ? 1 : 0), ' ');
                }
            }
        }
        ans.push_back(line);
        i = j;
    }
    return ans;
}
int main()
{
    vector<string> a = {"This", "is", "an", "example", "of", "text", "justification."};
    int maxi = 16;
    vector<string> ans = fullJustify(a, maxi);
    for (auto it : ans)
    {
        cout << it << endl;
    }
}
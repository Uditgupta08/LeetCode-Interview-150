// https://leetcode.com/problems/jump-game-ii/

#include <bits/stdc++.h>
using namespace std;
int jump(vector<int> &a)
{
    int mini = 0;
    int maxi = 0;
    int ans = 0;
    while (maxi < a.size() - 1)
    {
        int jump = 0;
        for (int i = mini; i <= maxi; i++)
        {
            jump = max(jump, i + a[i]);
        }
        mini = maxi + 1;
        maxi = jump;
        ans++;
    }
    return ans;
}
int main()
{
    vector<int> a = {2, 3, 1, 1, 4};
    cout << jump(a) << endl;
}
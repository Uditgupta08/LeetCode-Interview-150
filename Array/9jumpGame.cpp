#include <bits/stdc++.h>
using namespace std;
bool canJump(vector<int> &a)
{
    int jump = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (jump < 0)
        {
            return false;
        }
        jump = max(jump, a[i]);
        jump--;
    }
    return true;
}
int main()
{
    vector<int> a = {2, 3, 1, 1, 4};
    cout << canJump(a) << endl;
}
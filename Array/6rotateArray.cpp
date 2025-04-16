#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &a, int k)
{
    int n = a.size();
    if (n == 1 || k == n)
        return;
    k = k % n;
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    rotate(a, 3);
    for (auto it : a)
    {
        cout << it << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &a)
{
    int k = 2;
    int n = a.size();
    if (a.size() <= 2)
        return a.size();
    for (int i = 2; i < n; i++)
    {
        if (a[i] != a[k - 2])
        {
            a[k] = a[i];
            k++;
        }
    }
    return k;
}
int main()
{
    vector<int> a = {1, 1, 2};
    cout << removeDuplicates(a) << endl;
    for (auto it : a)
    {
        cout << it << " ";
    }
}
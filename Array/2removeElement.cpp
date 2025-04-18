// https://leetcode.com/problems/remove-element/

#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int> &a, int val)
{
    int i = 0;
    int k = 0;
    while (i < a.size())
    {
        if (a[i] != val)
        {
            a[k] = a[i];
            k++;
        }
        i++;
    }
    return k;
}
int main()
{
    vector<int> a = {3, 2, 2, 3};
    cout << removeElement(a, 3) << endl;
    for (auto it : a)
    {
        cout << it << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = n + m - 1;
    while (i >= 0 && j >= 0)
    {
        if (a[i] < b[j])
        {
            a[k] = b[j];
            j--;
        }
        else
        {
            a[k] = a[i];
            i--;
        }
        k--;
    }
    while (j >= 0)
    {
        a[k] = b[j];
        k--;
        j--;
    }
}
int main()
{
    vector<int> a = {1, 2, 3, 0, 0, 0};
    int n = 3;
    vector<int> b = {2, 5, 6};
    int m = 3;
    merge(a, n, b, m);
    for (auto it : a)
    {
        cout << it << " ";
    }
}
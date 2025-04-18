// https://leetcode.com/problems/majority-element/

#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &a)
{
    int n = a.size();
    int maj = 1;
    int ele = a[0];
    int i = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == ele)
        {
            maj++;
        }
        else
        {
            maj--;
        }
        if (maj <= 0)
        {
            ele = a[i];
            maj = 1;
        }
    }
    return ele;
}
int main()
{
    vector<int> a = {1, 1, 2};
    cout << majorityElement(a) << endl;
}
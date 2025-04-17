#include <bits/stdc++.h>
using namespace std;
class RandomizedSet
{
public:
    unordered_map<int, int> m;
    vector<int> a;

    RandomizedSet() {}

    bool insert(int val)
    {
        if (m[val] == 0)
        {
            m[val]++;
            a.push_back(val);
            return true;
        }
        return false;
    }
    bool remove(int val)
    {
        if (m[val] == 0)
        {
            return false;
        }
        int ind = -1;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == val)
            {
                ind = i;
                break;
            }
        }
        swap(a[ind], a.back());
        a.pop_back();
        m[val]--;
        return true;
    }
    int getRandom()
    {
        int r = rand() % a.size();
        return a[r];
    }
};
int main()
{
    srand(time(0));
    RandomizedSet *obj = new RandomizedSet();
    cout << "Insert 10: " << obj->insert(10) << endl;
    cout << "Insert 20: " << obj->insert(20) << endl;
    cout << "Insert 10 again: " << obj->insert(10) << endl;
    cout << "Remove 20: " << obj->remove(20) << endl;
    cout << "Remove 30 (not present): " << obj->remove(30) << endl;
    cout << "Random element: " << obj->getRandom() << endl;
    return 0;
}

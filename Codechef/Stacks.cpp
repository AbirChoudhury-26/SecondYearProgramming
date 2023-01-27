#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll int n, m;
        cin >> n;
        vector<int> v;
        cin >> m;
        v.push_back(m);
        for (int i = 1; i < n; i++)
        {
            cin >> m;
            auto upper=upper_bound(v.begin(),v.end(),m);
            if(upper==v.end())
                v.push_back(m);
            else
             *upper=m;
        }
        cout << v.size() << " ";
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

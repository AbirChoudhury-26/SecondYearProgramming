#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        multiset<int> ms;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ms.insert(a[i]);
        }
        while (y > 0)
        {
            int m = *ms.begin();
            if ((m ^ x) > m)
            {
                ms.erase(m);
                ms.insert(m ^ x);
                y--;
            }
            else
                break;
        }
        if(y%2)
        {
         int m=*ms.begin();
         ms.erase(m);
         ms.insert(m^x);
        }
        for(auto it:ms)
         cout<<it<<" ";
        cout<<endl;
    }
}
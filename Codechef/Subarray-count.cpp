#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0;
        vector<int> v;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                for (int k = i; k <= j; k++)
                    v.push_back(a[k]);
                int l=v.size();
                if(v[0]<=v[1] && v[l-2]<=v[l-1])
                 count++;
                v.clear();
            }
        }
    }
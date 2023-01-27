#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, son = 0, chef = 0,ans;
        cin >> n >> k;
        int a[n];
        for (int j = 0; j < n; j++)
            cin >> a[j];
        sort(a, a + n);
        if (k <= n / 2) 
        {
            for (int j = 0; j < n; j++)
            {
                if (j < k)
                    son += a[j];
                else
                    chef += a[j];
            }
            ans = chef - son;
        }
        else 
        {
            k = n - k;
            for (int j = 0; j < n; j++)
            {
                if (j < k)
                    son += a[j];
                else
                    chef += a[j];
            }
            ans = chef - son;
        }
        cout<<ans<<endl;
    }
    return 0;
}
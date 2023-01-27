#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans = 999999999, diff;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
            cin >> a[j];
        sort(a, a + n);
        for(int j=0;j<n;j++)
         cout<<a[j]<<" ";
        // for (int j = 1; j < n; j++)
        // {
        //     diff = a[j] - a[j - 1];
        //     if (ans > diff)
        //         ans = diff;
        // }
        // cout << ans << endl;
    }
    return 0;
}
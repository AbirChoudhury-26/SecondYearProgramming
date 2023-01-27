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
        ll int n, q,g;
        cin >> n >> q;
        int maxi = INT_MIN;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp > maxi)
            {
                a[i] = temp;
                maxi = temp;
            }
            else
            {
                a[i] = maxi;
            }
        }
        while (q--)
        {
            cin >> g;
            cout << a[g-1] << endl;
        }
    }
    return 0;
}

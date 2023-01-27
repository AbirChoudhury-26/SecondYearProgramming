#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, m, k = 0,z;
        cin >> n >> q;
        int a[n], b[n];
        m = n * n;
        int c[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[k] = a[i] + b[j];
                k++;
            }
        }
        sort(c, c + m);
        for (int j = 0; j < q; j++)
            {
                cin>>z;
                cout<<c[z-1]<<endl;
            }
    }
    return 0;
}
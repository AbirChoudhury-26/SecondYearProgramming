#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, i,k;
        cin >> n >> q;
        int a[n];
        int c[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int j = 0; j < q; j++)
        {
            int count = 0, m = 0;
            cin >> k;
            for (i = 0; i < n; i++)
            {
                if (a[i] < k)
                {
                    c[i] = a[i];
                    m++;
                }
                else
                    count++;
            }
            int high = m - 1, low = 0;
            for (int i = 0; i < m; i++)
            {
                if ((high - low) >= (k - a[high]))
                {
                    count++;
                    low += k - a[high];
                    high--;
                }
                else
                 break;
             }
             cout<<count<<endl;
        }
    }
    return 0;
}
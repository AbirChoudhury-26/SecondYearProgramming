#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, k;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        while (q--)
        {
            int count = 0;
            cin >> k;
            for (int i = n - 1; i >= 0; i--)
            {
                if (v[i] >= k)
                    count++;
                else
                {
                    if ((i - 0) >= (k - v[i]))
                        count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}
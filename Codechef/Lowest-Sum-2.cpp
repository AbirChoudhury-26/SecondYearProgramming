#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, m;
        ll sum=0;
        cin >> n >> q;
        ll a[n], b[n];
        vector<int> vec;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (n/i+1); j++)
            {
                sum = a[i] + b[j];
                vec.push_back(sum);
            }
        }
        sort(vec.begin(), vec.end());
        while(q--)
        {
            cin >> m;
            cout << vec[m - 1];
        }
    }
    return 0;
}
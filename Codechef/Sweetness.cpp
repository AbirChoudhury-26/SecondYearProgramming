#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool sortbysec(const pair<ll, ll> &a,
               const pair<ll, ll> &b)
{
    return (a.second > b.second);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        ll arr[n], arr1[n];
        vector<pair<int, int>> vect;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            vect.push_back(make_pair(arr[i], arr1[i]));
        }
        sort(vect.begin(), vect.end(), sortbysec);
        for (auto it = vect.begin(); it != vect.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
    }
    return 0;
}
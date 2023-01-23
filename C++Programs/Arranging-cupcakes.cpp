#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n, mini = INT_MAX;
        cin >> n;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                mini = min(mini, (n/i-i));
        }
        cout << mini << endl;
    }
}
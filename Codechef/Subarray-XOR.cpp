#include <iostream>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const unsigned int M = 998244353;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        ll int n;
        cin >> n;
        int ans = 0;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                int rem, num = 0, k = 0;
                int x = stoi(s.substr(i, j));
                while (x != 0)
                {
                    rem = x % 10;
                    num += rem * pow(2, k);
                    x /= 10;
                    k++;
                }
                num%=M;
                ans = ans ^ num;
                
            }
        }
        cout << ans % M << endl;
    }
    return 0;
}
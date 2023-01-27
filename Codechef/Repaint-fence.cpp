#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k,count=0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'R')
            {
                int m = min(n, i + k - 1);
                for (int j = i; j <= m; j++)
                {
                    if (s[j] == 'R')
                        s[j] = 'G';
                    else
                        s[j] = 'R';
                }
                count++;
            }
            else
                continue;
        }
        cout<<count<< endl;
    }
}
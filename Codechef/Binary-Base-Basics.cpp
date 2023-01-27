#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, f = 1;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k > 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] == s[n - 1 - i])
                    f = 1;
                else
                {
                    s[i] = s[n - 1 - i];
                    k--;
                }
                if(k>0)
                 f=1;
                else
                 break;
            }
        }
        string rev = string(s.rbegin(), s.rend());
        if(k>0)
            cout<<"NO"<<endl;
        else if (s == rev)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
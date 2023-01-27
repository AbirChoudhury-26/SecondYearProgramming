#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, mex = 0;
        cin >> n >> k;
        int s[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];
        sort(s, s + n);
        while (1)
        {
            int f = 1;
            for (int i = 0; i < n; i++)
            {
                if (mex == s[i])
                    mex++;
                else
                    f = 0;
            }
            if (f == 0)
            {
                if (k > 0)
                {
                    k--;
                    mex++;
                }
                else
                    break;
            }
        }
        cout << mex << endl;
    }
    return 0;
}
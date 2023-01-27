#include <iostream>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r,sum,s;
        ll int n;
        cin >> n;
        cin >> s;
       // cout << "Substring are: " << endl;
        for (int i = 0; i < n; i++)
        {
            int sum=0;

            for (int j = 1; j <= n - i; j++)
            {
                 int p=1;
                r = s.substr(i, j);
                cout<<r<<endl;
                while (r > 0)
                {
                    int mod = r % 10;
                    if (mod == 1)
                        p = p * 1;
                    else
                    {
                        p = 0;
                        break;
                    }
                    r /= 10;
                }
                if(r==0)
                  sum=0;
                else
                 sum+=p;
            }
             cout<<"Sum is: "<<sum<<endl;
        }
    }
}

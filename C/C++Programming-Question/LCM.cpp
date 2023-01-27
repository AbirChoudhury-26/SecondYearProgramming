#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a,b;
    // cin>>a>>b;
    //     cout<<"LCM of 2 number a and b is: "<<(a*b)/__gcd(a,b);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, sum = 0;
        cin >> n >> k;
        vector<int> profits(n);
        for (int i = 0; i < n; i++)
            cin >> profits[i];
        // sort(profits.begin(),profits.end());
        for (int i = n - 1; i >= 0; i--)
        {
            // if(k>0 && profits[i] >0 )
            // {
            //      sum+=profits[i];
            //      k--;
            // }
            // else if(k==0)
            //     break;
            if (k > 0)
            {
                auto maxi = *max_element(profits.begin(), profits.end());
                if (maxi > 0)
                {
                    sum += maxi;
                    remove(profits.begin(),profits.end(),maxi);
                }
                else
                    continue;
                k--;
            }
            else
                break;
        }

        cout << sum << endl;
    }
}

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, k, w, son = 0, father = 0;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());

        if (k > n / 2)
        {
            k = n-k;
            for (int j = 0; j < n; j++)
            {
                if (j < k)
                    son += vec[j];
                else
                    father += vec[j];
            }
            cout << father - son << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j < k)
                    son += vec[j];
                else
                    father += vec[j];
            }
        }
        // for(auto it:vec)
        //  cout<<it<<" ";
        cout << father - son << endl;
    }
    return 0;
}

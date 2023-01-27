#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,area=1;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        int m = *max_element(vec.begin(), vec.end());
        vector<int> freq(m + 1, 0);
        for (int i = 0; i < n; i++)
            freq[vec[i]]++;
        // for(auto it:freq)
        //  cout<<it<<endl;
        bool f = 0;
        for (int i = m; i > 0; i--)
        {
            if(freq[vec[i]]>=2)
             area*=vec[i];
             freq[vec[i]]-=2;
             f=1;
            if(f)
            {
                if(freq[vec[i]]>=2)
                {
                    area*=vec[i];
                    f=0;
                    break;
                }
            }
            if(f==0)
             
        }
    }
    return 0;
}
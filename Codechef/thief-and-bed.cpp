#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<map>
using namespace std;
int main()
{
    vector<int> vec;
    int t;
    cin >> t;
    while (t--)
    {
        map<int,int>mp;
        long long int n, q;
        cin >> n >> q;
        int num, x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            vec.push_back(num);
        }
        while (q--)
        {
            cin >> x;
            if (x == 1)
            {
                cin >> y;
                vec.push_back(y);
            }
            else if (x == 2)
                cout << floor(accumulate(vec.begin(), vec.end(), 0.0) / vec.size()) << endl;
            else if (x == 3)
            {
               for(int i=0;i<vec.size();i++)
                mp[vec[i]]++;
                pair<int,int>mode=make_pair(0,0);
                 for(auto it=mp.begin();it!=mp.end();it++)
                  {
                    if(it->second>mode.second)
                     mode=make_pair(it->first,it->second);
                  }
                  cout<<mode.first<<endl;
                  mp.clear();
            }
        }
    }
    return 0;
}
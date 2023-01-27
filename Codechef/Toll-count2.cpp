#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    map<string, float> toll;
    while (n--)
    {
        string s1, s2;
        float t;
        cin >> s1 >> s2 >> t;
        if (s1 == "entry")
            toll[s2] = t / 60;
        else if (s1 == "exit")
        {
            auto it = toll.find(s2);
            float num = (t / 60) - it->second;
            cout<<num<<endl;
            int c = ceil(num);
            cout<<c<<endl;
            sum += (c - 1) * 30 + 60;
        }
    }
    cout<<endl;
     for(auto it:toll)
      cout<<it.first<<" "<<it.second<<endl;
    cout << sum << endl;
    return 0;
}
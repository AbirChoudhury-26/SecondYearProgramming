#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    map<char, int> lap;
    int t;
    cin >> t;
    while (t--)
    {
        int f = 1;
        string s;
        cin >> s;
        int len = s.length();
        for (long i = 0; i < s.length() / 2; i++)
            lap[s[i]]++;
        if (len % 2 == 0) // evenlength of string .Eg:gaga
        {
            for (int i = len / 2; i < len; i++)
                lap[s[i]]--;
        }
        else
        {
            for(int i=(len/2+1);i<len;i++)
             lap[s[i]]--;
        }
        // for(auto it:lap)
        //  cout<<it.first<<" "<<it.second<<endl;
        for (auto it : lap)
        {
            if (it.second != 0)
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    lap.clear();
    }
    return 0;
}
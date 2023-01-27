#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string l;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ':')
                l += ":";
            l += s[i];
        }
        // cout<<l<<"-"<<l.length();
        queue<int> ir;
        queue<int> mm;
        int total = 0;
        for (int i = 0; i < l.length(); i++)
        {
            if (l[i] == 'I')
            {
                while (!mm.empty() && abs(mm.front() - i) > k)
                    mm.pop();
                if (!mm.empty())
                {
                    total++;
                    mm.pop();
                }
                else
                    ir.push(i);
            }
            else if(l[i]=='M')
            {
             while (!ir.empty() && abs(ir.front() - i) > k)
                    ir.pop();
                if (!ir.empty())
                {
                    total++;
                    ir.pop();
                }
                else
                    mm.push(i);   
            }
             else if(s[i]=='X')
             {
                while(!mm.empty())
                 mm.pop();
                 while(!ir.empty())
                  ir.pop();
             }
        }
        cout<<total<<endl;
    }
    return 0;
}

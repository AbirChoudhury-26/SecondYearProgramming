#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0, ans = 0;
        stack<char> mystack;
        string s;
        cin >> s;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == '<')
                mystack.push(s[i]);
            else if (s[i] == '>')
            {
                if (mystack.empty())
                {
                    count = 0;
                     break;
                }
                else
                {
                    mystack.pop();
                    if (mystack.empty())
                    {
                        count +=(i+1);
                        ans = count;
                        count=0;
                    }
                     
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
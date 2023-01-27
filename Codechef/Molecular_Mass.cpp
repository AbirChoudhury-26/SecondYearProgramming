#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    int t, ans = 0, ans1 = 0;
    char x;
    cin >> t;
    while (t--)
    {
        stack<char> mol;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                while (s[i] != ')')
                {
                    if (s[i] == 'C')
                        ans1 += 12;
                    else if (s[i] == 'O')
                    {
                        if (s[i + 1] >= '1' && s[i + 1] <= '9')
                            ans1 += 16 * s[i + 1];
                        else
                            ans1 += 16;
                    }
                    else
                    {
                        if (s[i + 1] >= '1' && s[i + 1] <= '9')
                            ans1 += 1 * s[i + 1];
                        else
                            ans1 += 1;
                    }
                }
                if (s[i + 1] >= 2 && s[i + 1] <= 9)
                    ans1 = ans1 * s[i + 1];
                ans += ans1;
                ans1 = 0;
                //         mol.push(s[i]);
                // }
                // else if (s[i] == ')')
                // {
                //     while (s[i] != '(')
                //     {
                //         x = mol.top();
                //         if (x == 'C')
                //             ans1 += 12;
                //         else if (x == 'H')
                //             ans1 += 1;
                //         else if (x == 'O')
                //             ans1 += 16;
                //         else if (x >= '1' && x <= '9')
                //         {
                //             mol.pop();
                //             if (mol.top() == 'C')
                //                 ans1 += x * 12;
                //             else if (mol.top() == 'O')
                //                 ans1 += x * 16;
                //             else
                //                 ans1 += x * 1;
                //         }
                //     }
                //     if(s[i+1]>='2' && s[i+1]<='9')
                //            ans1=ans1*s[i+1];
                // ans+=ans1;
                // ans1=0;
                }
                else if (s[i] == 'C')
                    ans += 12;
                else if (s[i] == 'H')
                    ans += 1;
                else if (s[i] == 'O')
                    ans += 16;
            }
            cout << ans << endl;
        }
        return 0;
    }
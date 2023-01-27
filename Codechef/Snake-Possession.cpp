#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int i = 0; i < r; i++)
    {
        int l, f = 1, h = 0;
        cin >> l;
        string s;
        cin >> s;
        for (int j = 0; j < l; j++)
        {
            if (s[j] == '.')
                f=1;
            else if (s[j] == 'H')
            {
                for (int j = i + 1; j < l; j++)
                {
                    if (s[j] == 'T')
                        break;
                    else if (s[j] == 'H')
                    {
                        f = 0;
                        break;
                    }
                }
            }
            else if (s[j] == 'T')
            {
                while (j--)
                {
                    if (s[j] == 'H')
                    {
                        f = 1;
                        break;
                    }
                    else if(s[j]=='.')
                    {
                        f=1;
                    }
                    else
                    {
                     f=0;
                      break;
                    }
                }
            }
        }
        if (f == 0)
            cout << "Invalid" << endl;
        else
            cout << "Valid" << endl;
    }
    return 0;
}
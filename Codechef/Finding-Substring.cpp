#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int rem, ans = 0, b = 1, f = 0;
        cin >> s;
        int len = s.length();
        for (int i = 0; i < len; i++) //How many iterations will be there ,i.e,for all numner of characters
        {
            for (int j = 1; j <= len - i; j++) //For each character how many substring will be there
            {
                string a = s.substr(i, j);
                int data = stoi(a);
                ans = 0;
                b = 1;
                while (data > 0)
                {
                    rem = data % 10;
                    ans = ans + rem * b;
                    b *= 2;
                    data /= 10;
                }
                for (int i = 2; i < ans; i++)
                {
                    if (ans % i == 0)
                    {
                        f = 0;
                        continue;
                    }
                }
                if (i == ans)
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f == 0)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<char> open;
        vector<char> close;
        int n, length = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == '(' && s[i + 1] == ')')
            {
                length += 2;
                i++;
            }
            else if (s[i] == '(' && (s[i + 1] != ')' || s[i + 1] == '\0'))
                open.push_back(s[i]);
            else
                close.push_back(s[i]);
        }
        while (!open.empty() && !close.empty())
        {
            length += 2;
            open.pop_back();
            close.pop_back();
        }
        cout << length << endl;
    }
    return 0;
}
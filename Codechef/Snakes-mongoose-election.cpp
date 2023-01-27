#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sn = 0, m = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 's')
                sn++;
            else if (s[i] == 'm')
            {
                m++;
                if ((i - 1) >= 0 && s[i - 1] == 's')
                    sn--;
                else if ((i + 1) < s.length() && s[i + 1] == 's')
                    sn--;
            }
        }
        if (sn > m)
            cout << "snakes" << endl;
        else if (m > sn)
            cout << "mongooses" << endl;
        else
            cout << "tie" << endl;
    }
    return 0;
}
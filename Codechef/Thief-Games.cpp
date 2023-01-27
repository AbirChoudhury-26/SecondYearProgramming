#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string a, b;
        int f = 1;
        cin >> a >> b;
        int l = a.length(); //man nam
        for (int j = 0; j < l; j++)
        {
            if (a[j] != b[l - j - 1])
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            cout << "Yes" << endl;
        else
        {
            for (int j = 1; j < l; j++)
            {
                if (a[j] != b[j])
                {
                    f = 0;
                    cout << "No" << endl;
                    break;
                }
                else
                    f = 1;
            }
            if (f == 1)
                cout << "Yes" << endl;
        }
    }
    return 0;
}
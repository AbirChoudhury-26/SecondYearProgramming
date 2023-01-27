#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "*****";
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 5)
            cout << s;
        else
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j == 1 || j == 5)
                    cout << "*";
                else
                    cout << " ";
            }
        }
    cout<<endl;
    }
}
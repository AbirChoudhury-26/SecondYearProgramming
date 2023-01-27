#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "0";
    string s1 = "10";
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 != 0)
        {
            cout << s;
            s = s + "10";
        }
        else
        {
            cout << s1;
            s1 = s1 + "10";
        }
        cout<<endl;
    }
}
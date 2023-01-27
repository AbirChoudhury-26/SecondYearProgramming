#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s=" * ";
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
            cout << " ";
        cout<<s<<endl;
        s=s+" * ";
    }
}
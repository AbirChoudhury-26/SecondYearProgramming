#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6] = {16, 17, 4, 3, 5, 2};
    int maxi = a[5];
    cout << "Leaders are: ";
    cout << maxi << " ";
    for (int i = 4; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            cout << a[i]<<" ";
            maxi = a[i];
        }
    }
}
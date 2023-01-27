#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l = INT_MIN, sl = INT_MIN, f = 1;
    while (f!=0)
    {
        cin >> n;
        if (n == -1)
            // cout << l << " " << sl << endl;
             f = 0;
        else
        {
            if (n > l)
            {
                sl = l;
                l = n;
            }
            else if (l >= n && sl < n)
                sl = n;
        }
    }
    cout << l << endl;
    cout << sl << endl;
}
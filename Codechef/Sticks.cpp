#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];
        }
        int freq[max + 1];
        for (int i = 0; i < (max + 1); i++)
            freq[i] = 0;
        for (int i = 0; i < n; i++)
            freq[a[i]]++;
        int area = 1;
        bool flag = false;
        bool complete=false;
        for (int i = max; i > 0; i--)
        {
            if (flag == false)
            {
                if (freq[i] >= 2)
                {
                    area *= i;
                    flag = true;
                    freq[i] -= 2;
                }
            }
            if (flag == true)
            {
                if (freq[i] >= 2)
                {
                    area *= i;
                    complete=true;
                    break;
                }
            }
        }
        if (complete==true)
            cout << area << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
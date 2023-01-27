#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    int max = INT_MIN;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
    }
    int freq[max + 1] = {0};
    for (int i = 0; i < n; i++)
        freq[a[i]]++;
    for (int i = max; i >= 0; i--)
    {
        if (freq[i] > (n / 2))
        {
            cout << i << endl;
            f=1;
            break;
        }
    }
    if(f==1)
     cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl;
}
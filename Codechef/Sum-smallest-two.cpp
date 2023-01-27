#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, ss, sum;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            sort(a, a + n);
         for (int i = 0; i < n; i++)
          cout<<a[i]<<endl;
        
        s = a[0];
        ss = a[1];
        sum = s + ss;
        ;
        cout << sum << endl;
    }
    return 0;
}
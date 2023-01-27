#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r, count = 0,sum=0;
    cin >> l >> r;
    for (int i = 1;; i++)
    {
        int ans = 1;
        int num = i;
        while (num > 0)
        {
            ans = ans * num;
            num--;
        }
        if (ans > r)
            break;
        else if (ans >= l)
        {
            count++;
            sum+=ans;
        }
        else
            continue;
    }
    cout << count << endl;
    cout<<sum<<endl;
}
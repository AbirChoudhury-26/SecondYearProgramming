#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 1, count = 0;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                f = 0;
                break;
            }
        }
        //cout<<n<<endl;
        if (f == 0)
        {
            for (int j = 2; j < n ; j++)
            {
                if (n % j == 0)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
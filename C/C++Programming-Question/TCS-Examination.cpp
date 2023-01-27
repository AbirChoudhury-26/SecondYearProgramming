#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a[3], b[3], sum = 0, sum1 = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < 3; j++)
        {
            cin >> b[j];
        }
        for(int i=0;i<3;i++)
         sum=sum+a[i];
        for(int j=0;j<3;j++)
         sum1=sum1+a[j];

        if (sum > sum1)
            cout << "Dragon" << endl;
        else if (sum1 > sum)
            cout << "Sloth" << endl;
        else
        {
            for (int i = 0; i < 3; i++)
            {
                if (a[i] > b[i])
                {
                    cout << "Dragon" << endl;
                    break;
                }
                else if (b[i] > a[i])
                {
                    cout << "Sloth" << endl;
                    break;
                }
            }
            if (i == 3)
                cout << "Tie" << endl;
        }
    }
}
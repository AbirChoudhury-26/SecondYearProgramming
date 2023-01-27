#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][4] = {1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1}, lt = 1, ut = 1, d = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //     if (i > j)
            //     {
            //         if (a[i][j] != 0)
            //         {
            //             ut= 0;
            //             break;
            //         }
            //     }
            //     else if(j>i)
            //      {
            //         if(a[i][j]!=0)
            //         {
            //             lt=0;
            //             break;
            //         }
            //      }
            if (i == j)
            {
                if (a[i + 1][j] != a[i][j] && a[i][j+1]!= a[i][j])
                {
                    d = 0;
                    break;
                }
            }
        }
    }
    for(int i=0;i<4;i++)
     {
        for(int j=0;j<4;j++)
         cout<<a[i][j];
        cout<<endl;
     }
    // if (lt == 0 && ut == 0)
    //     cout << "Neither of them" << endl;
    // else if (lt == 0 && ut == 1)
    //     cout << "Upper-triangular" << endl;
    // else if (lt == 1 && ut == 0)
    //     cout << "Lower-triangular-matrix" << endl;
    if (d == 1)
     cout << "Diagonal-Matrix" << endl;
    else
     cout<<"No"<<endl;
}
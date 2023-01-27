#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, j = 0, f = 1,z;
        cin >> n;
        int a[n];
        int c[n] = {0};
        for (int i = 0; i < n; i++)   //Input taking
        {
            cin >> a[i];
        }
        c[0] = a[0];                 //Taking first value in c array

        for (int i = 1; i < n; i++)   //Checing if array has radius greater or smaller than previous
        {
            if (a[i] > c[j])           //If greater than simply put in c array 
            {
                j++;
                c[j] = a[i];
            }
            else                            //if not then ,
            {
                for (k = 0; k <= j; k++)                  //Check  all the elements of array.
                {
                    if (a[i] != c[k] && a[i] < c[k])      //If all are same and not greater than coming value,then f=1 else f=0
                    {
                        f = 0;
                        z = k;
                         break;
                    }
                }            
                if (f == 1)
                {
                    c[k] = a[i];
                    j++;
                }
                else
                    c[z] = a[i];
            }
            f=1;
        }
        cout << j + 1 << " ";
        for (int i = 0; i <= j; i++)
            cout << c[i] << " ";
        cout << endl;
    }
return 0;
}



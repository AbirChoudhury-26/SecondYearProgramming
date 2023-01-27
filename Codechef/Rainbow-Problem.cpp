#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, f = 0, rb = 1;
         cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (a[0] == a[n - 1] && a[0] == 1)
        {
            for (int k = 1, l = n - 2;k<=l; k++, l--) //K is for initialization from array of 1 to n-2
            {
                if (a[k] - a[k - 1] == 1 || a[k] == a[k - 1])
                {
                    if (a[k] - a[k - 1] == 1)
                    {
                        rb++;
                    }
                    if (rb > 7)
                    {
                        f = 0;
                        break;
                    }

                    else

                    {
                        if (a[k] == a[l] && a[k] == rb)
                            f = 1;
                        else
                        {
                            f = 0;
                            break;
                        }
                    }
                }
                else
                {
                    f = 0;
                    break;
                }
            }
        }
        else
        {
            f=0;
            break;
        }
        if(f==1 && rb==7)
        {
            cout<<"Yes"<<endl;

        }
        else
        {
            cout<<"No"<<endl;
        }
          
    }
    return 0;
}

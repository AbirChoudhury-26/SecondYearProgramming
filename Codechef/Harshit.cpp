#include <iostream>
using namespace std;

int main()
{
    int t, n,count;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        for (int j = 1; j <= n; i++)
        {
            count++;
            if (s[j] != s[j + 1])
            {
                if (s[j - 1] == s[j + 1])
                {
                    for (int k = 0; k = (n - j); k++)
                    {
                        s[j + k] = s[j + (k + 1)];
                    }
                    n = n - 1;
                }
                else if(s[j] == s[j + 2])
                {
                    for (int k = 0; k = (n - j); k++)
                    {
                        s[j + (k+1)] = s[j + (k + 2)];
                    }
                    n = n - 1;
                    
                }
                break;
            }
            
        }
        if(count%2==0)
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            cout<<"ALICE"<<endl;
        }
    }
    return 0;
}
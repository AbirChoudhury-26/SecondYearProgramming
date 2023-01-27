#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, j = 0, k = 0;
        cin >> n;
        string str;
        cin >> str;
        string str1 = "mom";
        string str2 = "dad";

        for (int i = 0; i < n; i++) // modazzdm abcde
        {
            if (str[i] == str1[j])
            {
                j++;
                if (j == 3)
                     break;
                else
                    continue;
            }

            else if (str[i] == str2[k])
            {
                k++;
                if (k == 3)
                    break;
                else
                    continue;
            }
            else
                continue;
        }
        if(j==3)
         cout<<"Mom"<<endl;
        else if(k==3)
         cout<<"Dad"<<endl;
        else 
         cout<<"Goo-Goo"<<endl;
    }
    return 0;
}
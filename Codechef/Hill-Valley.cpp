#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m,i, count = 0, count1 = 0;
    char a[10000];
    cin>>n>>m;
    //cout<<n<<m;
    if (n > m)
    {
        a[i] = 0;
        
        while (count <= n)
        {
            i++;
            a[i] = '1';
            cout<<a[i];
            i++;
            a[i] = '0';
            cout<<a[i];
        }
        count++;

        for(int i=0;a[i]!='\0';i++)
        {
            cout<<a[i];
        }

        for (i = 0; a[i] != '\0'; i++)
        {
            if (a[i] == '1' && a[i + 2] == '1')
                count1++;
        }

        if (count == n && count1 == m)
        {
            int len = sizeof(a) / sizeof(a[0]);
            cout << len << "\n";
            for (i = 0; a[i] != '\0'; i++)
            {
                cout << a[i];
            }
        }
    }
    return 0;
}
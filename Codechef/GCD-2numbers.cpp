#include <iostream>
using namespace std;
int main()
{
    int x1, x2, n1, hcf;
    cin >> x1 >> x2;
    for (int i = x1; i < x2; i++)
    {
        for (int j = i + 1; j <= x2; j++)
        {
            if (j > i)
                n1 = i;
            else
                n1 = j;
            for (int z = 1; z <= n1; z++)
            {
                if (i % z == 0 && j % z == 0)
                    hcf = z;
            }
             if(hcf>1)
            cout<<"HCF of "<<i<<" and "<<j<<" is:"<<hcf<<endl;
        }
    }
    return 0;
}
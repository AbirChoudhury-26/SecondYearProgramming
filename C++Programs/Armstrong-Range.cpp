#include <iostream>
using namespace std;
int main()
{
    int n, num, mod, a ,lo, up,count=0;
    cout << "Enter the lower and upper  limit:"<<endl;
    cin >> lo >> up;
    for (int i =lo; i <= up; i++)
    {
       int  sum = 0,
        n = i;
        while (n > 0)
        {
            mod = n % 10;
            a = mod * mod * mod;
            sum = sum + a;   
            n = n / 10;
        }
          
        if(sum==i && count<3)
        {
         cout<<i<<" is an Armstrong number"<<endl;
         count++;
        }
        else if(count>=3)
         break;
    }
    return 0;
}
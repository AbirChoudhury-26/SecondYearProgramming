#include <iostream>
using namespace std;

int recursion(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 6;
    else
    {
        return (recursion(n - 1) + 2) * 2 - recursion(n-2);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = recursion(n);
		ans=(ans%100000007);
        cout << ans << endl;
    }
}
// #include<iostream>
// #include<vector>
// using namespace std;
// class recursion
// {
//     public:
//      vector<int>num;
//      void element(int n)
//      {
//          if(n==1)
//           return num.push_back(1);
//         else if(n==2)
//         {
//             element(n--);
//          return num.push_back(6);
//         }
//         else
//         {
//             element(n--);
//             num[n-1]=((num[n-2]+2)*2 -num[n-3]);
//         }
         
//      }
     
// };
// int main()
// {
//     int t,n;
//     cin>>t;
//     while(t--)
//     {
//         recursion a[t];
//         cin>>n;
//         a[t].element(n);
//         int k=num.size();

//     }
// }
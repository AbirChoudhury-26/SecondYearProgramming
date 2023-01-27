#include<iostream>
using namespace std;
int main()
{
    string a[100];
    string b="abir";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
     cin>>a[i];
    for(int i=0;i<n;i++)
     {
         if(a[i]==b)
         {
          cout<<"Yes";
          break;
         }
        else
         cout<<"No";
     }
    cout<<endl;
    return 0;
}
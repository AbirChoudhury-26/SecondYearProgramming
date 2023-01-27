#include<iostream>
#include<string>

using namespace std;

int main()
{
    char first,second,third,x,y;
    cin>>first>>second>>third;
    cin>>x>>y;

    if(x==first || y==first)
      cout<<first<<"\n";
    else if(x==second || y==second)
    cout<<second<<"\n";
    else
      cout<<third<<"\n";
    return 0;
}
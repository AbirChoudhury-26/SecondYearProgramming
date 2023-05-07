#include<iostream>
#include<string>
using namespace std;

void swap(int,int);

void swap(int a,int b)
{
    int temp=b;
    b=a;
    a=temp;
    cout<<"Inside function a="<<a<<"and b="<<b;
}

int main()
{
int a,b;
cout<<"Enter the values of a and b:";
cin>>a>>b;
cout<<"\nBefore Swapping a="<<a<<"and b="<<b<<endl;
swap(a,b);
cout<<"\nOutside Function a="<<a<<"and b="<<b<<endl;
return 0;
}
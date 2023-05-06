#include<iostream>
using namespace std;

inline float mul(float x,float y)
{
    return x*y;
}

inline double div(double x,double y)
{
    return x/y;
}
int main()
{
float a,b;
cout<<"Enter the values of a and b:";
cin>>a>>b;
cout<<mul(a,b)<<endl;
cout<<div(a,b);
return 0;
}
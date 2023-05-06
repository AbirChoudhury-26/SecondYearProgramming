#include<iostream>
using namespace std;

int volume(int);
double volume(double,double);
long volume(long,int,int);

int main()
{
    cout<<"Volume of cube is: "<<volume(10)<<endl;
    cout<<"Volume of cylinder is: "<<volume(2,10)<<endl;
    cout<<"Volume of cuboid is: "<<volume(10,20,30)<<endl;
    return 0;
}

inline int volume(int a)
{
return a*a*a;
}
inline double volume(double r,double h)
{
    return 3.14*r*h;
}
inline long volume(long l,int b,int h)
{
    return l*b*h;
}
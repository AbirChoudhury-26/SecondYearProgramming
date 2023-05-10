#include<iostream>
using namespace std;

class space
{
    int x,y,z;
     public:
      void getdata(int a,int b,int c)
      {
          x=a;
          y=b;
          z=c;
      }
      void putdata()
      {
          cout<<x<<" "<<y<<" "<<z<<endl;
      }
      void operator -();
      void operator +();
};

void space::operator -()
{
    x=-x;
    y=-y;
    z=-z;
}
void space::operator +()
{
    x=x*2;
    y=y*2;
    z=z*2;
}

int main()
{
    space s;
    s.getdata(10,-20,30);
    s.putdata();
    +s;
    s.putdata();
    -s;
    s.putdata();
}
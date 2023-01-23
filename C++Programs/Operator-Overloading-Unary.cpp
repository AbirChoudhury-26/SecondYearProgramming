#include<iostream>
#include<string>
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
       cout<<x<<y<<z;
       cout<<"\n";
   }

   void operator -();
};

void space:: operator -()
{
    x=-x;
    y=-y;
    z=-z;
}


int main()
{

space s;
s.getdata(2,4,5);
s.putdata();
-s;
s.putdata();
}
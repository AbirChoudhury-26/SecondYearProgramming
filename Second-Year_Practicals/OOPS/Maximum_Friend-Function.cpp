#include<iostream>
using namespace std;
class XYZ;
class ABC
{
    int a;
    public:
     void getdata(int x)
     {
      a=x;
     }
     friend void max(ABC,XYZ);
};
class XYZ
{
 int b;
 public:
  void getdata(int y)
  {
      b=y;
  }
  friend void max(ABC,XYZ);
};

void max(ABC m,XYZ n)
{
    if(m.a>=n.b)
     cout<<m.a<<" is greater";
    else 
     cout<<n.b<<" is greater";
}

int main()
{
    ABC obj1;
    XYZ obj2;
    obj1.getdata(10);
    obj2.getdata(20);
     max(obj1,obj2);
     return 0;
}

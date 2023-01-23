#include<iostream>
using namespace std;
class ABC;
class xyz
{
public:
int x;
void setvalue(int i)
{
    x=i;
}
friend void max(xyz,ABC);
};

class ABC
{
    
    public:
    int a;
    void setvalue(int i)
    {
        a=i;
    }
    friend void max(xyz,ABC);
};
void max(xyz m,ABC n)
{
    if(m.x>=n.a)
     cout<<"Person xyz has more friends";
    else
     cout<<"Person ABC has more friends";
}

int main()
{
    xyz obj1;
    ABC obj2;
     
    obj1.setvalue(10);
    obj2.setvalue(20);
     max(obj1,obj2);
    }
    
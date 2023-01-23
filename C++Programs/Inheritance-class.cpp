#include<iostream>
using namespace std;

class A
{
    public:
     
    // base class constructor
    A()
    {
        cout << "X" << endl;
    }
    ~A()
    {
        cout<<"Destructor X "<<endl;
    }
};
 
// sub class
class B : public A
{
    public:
     
    //sub class constructor
    B()
    {
        cout << "Y" << endl;
    }
     ~B()
    {
        cout<<"Destructor Y "<<endl;
    }
};
class C : public B
{
    public:
     
    //sub class constructor
    C()
    {
        cout << "Z" << endl;
    }
     ~C()
    {
        cout<<"Destructor Z "<<endl;
    }
};

 
// main function
int main() {
      
    // creating object of sub class
    C s1;
    
     
    return 0;
}


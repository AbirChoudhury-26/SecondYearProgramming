#include <iostream>
using namespace std;

class base
{
public:
    virtual void show()
    {
        cout << "Show Base" << endl;
    }
    virtual void display()
    {
        cout << "Base display" << endl;
    }
};

class derived :public base
{
public:
    void show()
    {
        cout << "Show Derived" << endl;
    }
    void display()
    {
        cout << "Derived display" << endl;
    }
};

class gamma:public derived{
    public:
     void show()
    {
        cout << "Show Gamma" << endl;
    }
    void display()
    {
        cout << "Gamma display" << endl;
    }
};

int main()
{
    base b;
    derived d;
    gamma g;
     base *bptr;
     bptr=&b;
     bptr->show();
     bptr->display();
    bptr=&d;
     bptr->show();
     bptr->display();
     bptr=&g;
     bptr->show();
     bptr->display();
     return 0;
// }
// #include<iostream>
// using namespace std;
 
// class base {
// public:
//     void fun_1() { cout << "base-1\n"; }
//     virtual void fun_2() { cout << "base-2\n"; }
//     virtual void fun_3() { cout << "base-3\n"; }
//     virtual void fun_4() { cout << "base-4\n"; }
// };
 
// class derived : public base {
// public:
//     void fun_1() { cout << "derived-1\n"; }
//     void fun_2() { cout << "derived-2\n"; }
//     void fun_4(int x) { cout << "derived-4\n"; }
// };
 
// int main()
// {
//     base *p;
//     derived obj1;
//     p = &obj1;
 
//     // Early binding because fun1() is non-virtual
//     // in base
//     p->fun_1();
 
//     // Late binding (RTP)
//     p->fun_2();
 
//     // Late binding (RTP)
//     p->fun_3();
 
//     // Late binding (RTP)
//     p->fun_4();
 
//     // Early binding but this function call is
//     // illegal (produces error) because pointer
//     // is of base type and function is of
//     // derived class
//     // p->fun_4(5);
   
//     return 0;
// }
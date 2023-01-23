#include<iostream>
#include<string>

using namespace std;

class base
{
    public:
     virtual void show()
     {
         cout<<"Show Base\n";
     }
     virtual void display()
     {
         cout<<"Display Base\n";
     }
};

class derived:public base{
    public:
    void show()
    {
        cout<<"Show Derived\n";
    }
    void display()
    {
        cout<<"Display Derived\n";
    }
};

int main()
{
    base b;
    derived d;
    base *bptr;
  bptr=&b;
  bptr->show();
  bptr->display();

  bptr=&d;

  bptr->show();
  bptr->display();
}
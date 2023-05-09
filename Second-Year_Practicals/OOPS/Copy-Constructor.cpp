#include<iostream>
using namespace std;

class code
{
    int id;
     public:
      code()              //default constructor 
      {
          id=0;
      }
      code(int a)       //Parametrized constructor
    {
        id=a;
    }
    code(code &x)       //Copy constructor
    {
        id=x.id;
    }
    void display()
    {
        cout<<id<<endl;
    }

};

int main()
{
    code A(100);
    code B(A);
    code C=A;
    code D;
    A.display();
    B.display();
    C.display();
    D.display();

}
#include<iostream>
using namespace std;
class complex
{
    float real,img;
   public:

   void input(float a,float b)
   {
       real=a;
       img=b;
   }
    void show()
    {
        cout<<"Real="<<real<<" ,"<<"Imaginary="<<img;
        cout<<"\n";
    }

    friend complex sum(complex,complex);
};

complex sum(complex f1,complex f2)
{
 complex c3;
 c3.real=f1.real+f2.real;
 c3.img=f1.img+f2.img;
 return c3;
}

int main()
{
complex a,b,c;

a.input(1.5,2.6);
b.input(3.8,4.2);
c=sum(a,b);

a.show();
b.show();
c.show();

}
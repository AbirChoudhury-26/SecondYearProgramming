#include<iostream>
using namespace std;

class complex
{
    double real,imag;
     public:
      complex()
      {
          real=imag=0;
      }
      complex(double a)
      {
          real=imag=a;
      }
      complex(double a,double b)
      {
          real=a;
          imag=b;
      }
      void putdata()
      {
          cout<<"Real = "<<real<<" and Imaginary = "<<imag<<endl;
      }
      complex operator +(complex);
};
 
 complex complex:: operator +(complex c)
 {
     complex temp;
     temp.real=real+c.real;
     temp.imag=imag+c.imag;
     return temp;
 }

 int main()
 {
     complex c1(1.6);
     complex c2(2.4,5.6);
     complex c3=c1+c2;
      c1.putdata();
      c2.putdata();
      c3.putdata();
 }
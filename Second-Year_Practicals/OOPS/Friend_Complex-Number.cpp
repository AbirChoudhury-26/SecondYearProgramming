#include<iostream>
using namespace std;

class complex
{
    float real,imag;
     public:
      void getdata(float a,float b)
      {
          real=a;
          imag=b;
      }
      void show()
      {
          cout<<"Real= "<<real<<" and Imaginary= "<<imag<<endl;
      }
      friend complex sum(complex,complex);
};

complex sum(complex C1,complex C2)
{
    complex C3;
     C3.real=C1.real+C2.real;
     C3.imag=C1.imag+C2.imag;
     return C3;
}

int main()
{
    complex A,B,C;
    A.getdata(10,1.2);
    B.getdata(20,5.6);
    C=sum(A,B);

    A.show();
    B.show();
    C.show();
    return 0;

}
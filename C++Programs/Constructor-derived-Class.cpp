#include<iostream>
#include<string>
using namespace std;

class alpha
{
    int x;
     public:
      alpha(int i)
      {
          x=i;
          cout<<"Alpha Initialized\n";

      }
      void show_x()
      {
          cout<<x<<"\n";
      }
};

class beta
{
    float y;
    public:
     beta(float j)
     {
         y=j;
         cout<<"Beta Initialized\n";
     }

     void show_y()
     {
         cout<<y<<"\n";
     }
};

class gamma:public beta, public alpha
{
    int m,n;
     public:
      gamma(int a,float b,int c,int d):alpha(a),beta(b)
      {
          m=c;
          n=d;
           cout<<"Gamma Initialized\n";
      }

      //cout<<"Gamma Initialized";

      void show_mn()
      {
          cout<<m<<" "<<n;
      }

};

int main()
{
    gamma g(2,2.5,5,6);
    g.show_x();
    g.show_y();
    g.show_mn();
}
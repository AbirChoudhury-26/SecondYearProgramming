#include<iostream>
using namespace std;

void test(int x)
{
    try{
        if(x==1)
         throw x;
        else if(x==0)
         throw 'x';
        else if(x==-1)
         throw 1.0;
        cout<<"End-of try sysytem"<<endl;
     }
 catch(char c)
 {
     cout<<"Caught an integer"<<endl;
 }
 catch(int m)
 {
     cout<<"Caught an integer"<<endl;
 }
 catch(double d)
  {
        cout<<"Caught an double"<<endl;
  }
  cout<<"End of try-catch system"<<endl;
}

int main()
{
    cout<<"Testing multiple-catches:"<<endl;
    cout<<"x==1"<<endl;
     test(1);
      cout<<"x==0"<<endl;
    test(2);
     cout<<"x==-1"<<endl;
     test(-1);
     cout<<"x==2"<<endl;
     test(2);
     return 0;
}
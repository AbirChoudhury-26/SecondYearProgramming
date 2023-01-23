#include<iostream>
using namespace std;

class test
{
    int code;
    static int count;
    public:
     void setcode()
     {
         code=++count;

     }
     void showcode()
     {
         cout<<code;
         cout<<"\n";
     }
    static void showcount()
    {
        cout<<count;
        cout<<"\n";
    }

};
 int test::count;
 
 int main()
 {


     test t1,t2,t3;
     t1.setcode();
     t2.setcode();
     //t3.setcode();
     test::showcount();

     t3.setcode();

     test :: showcount();

     t1.showcode();
     t2.showcode();
     t3.showcode();
 }


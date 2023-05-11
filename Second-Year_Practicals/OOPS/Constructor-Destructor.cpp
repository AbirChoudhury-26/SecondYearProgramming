#include<iostream>
using namespace std;
 
 int count=0;
class sample
{
    
     public:
      sample()
      {
       count++;
       cout<<"Object Created: "<<count<<endl;
      }
      ~sample()
      {
          cout<<"Object Destroyed: "<<count<<endl;
          count--;
     }
}; 

int main()
{
    sample s1,s2,s3,s4;
    {
        sample s5;
    }

    {
        sample s6;
    }
    return 0;
}
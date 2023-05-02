#include<iostream>
using namespace std;
 class manager{
     char name[30];
     int age;
      public:
      void getdata()
      {
          cout<<"Enter the name and age:"<<endl;
           cin>>name>>age;
      }
      void putdata()
      {
          cout<<name<<" "<<age<<endl;
      }
 };

 int main()
 {
     manager p[3];
      for(int i=0;i<3;i++)
      {
          cout<<"Enter Detail of Manager "<<i+1<<endl;
           p[i].getdata();
      }
      cout<<endl;
       for(int i=0;i<3;i++)
       {
           cout<<"Details of Manager"<<i+1<<" is: "<<endl;
               p[i].putdata();
       }
       return 0;
 }
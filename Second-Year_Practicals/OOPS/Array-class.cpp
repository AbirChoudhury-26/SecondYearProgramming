#include<iostream>
using namespace std;

class manager
{
    int age;
    char name[30];
     public:
      void getdata(void);
      void putdata(void);
};

void manager::getdata(void)
{
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
}
void manager::putdata(void)
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<endl;
}

const int size=3;

int main()
{
    manager m1[size];
     for(int i=0;i<size;i++)
      {
          cout<<"\nEnter the detail of "<<i+1<<" Manager:"<<endl;
          m1[i].getdata();
      }

      for(int i=0;i<size;i++)
      {
          cout<<"Details of Manager: " <<i+1<<endl;
           m1[i].putdata();
           cout<<endl;
      }
      return 0;
}
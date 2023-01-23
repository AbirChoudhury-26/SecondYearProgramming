#include<iostream>
#include<cstring>
using namespace std;

class person
{
    char name[30];
    int age;
     public:
      person(char *s,int a)
      {
          strcpy(name,s);
          age=a;
      }
       person greater(person &x)
       {
          if(x.age>=age)
          {
              return x;
          }
          else
           return *this;
       }
     void display()
     {
         cout<<name<<" "<<age;
     }

};

int main()
{
    person p1("Abir", 19);
    person p2("Manash",50);
    person p3("Chandana",44);

    person p=p1.greater(p3);
    p.display();
}
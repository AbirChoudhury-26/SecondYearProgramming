#include<iostream>
using namespace std;
class person
{
char name[40];
int age;
public:
 void getdata()
 {
     cout<<"Enter the name and age of person:";
     cin>>name>>age;
 }
 void putdata()
 {
     cout<<"\nDetails of person are:\n";
     cout<<name<<" "<< age;
 }

};

int main()
{
person p,p1;

 
p.getdata();
p1.getdata();

p.putdata();
p1.putdata();

} 
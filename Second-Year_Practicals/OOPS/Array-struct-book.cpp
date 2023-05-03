#include<iostream>
#include<string>
using namespace std;
struct book{
    char name[30];
    int pages;
    float price;
};

int main()
{
    struct book b1;
   cout<<"Enter name,pages,price of book:";
   cin>>b1.name>>b1.pages>>b1.price;

   cout<<"\nDetails are:";
   cout<<b1.name<<" "<<b1.pages<<" "<<b1.price<<endl;
   return 0;
}
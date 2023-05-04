#include<iostream>
using namespace std;

class item
{
    int code;
    float price;
     public:
      void getdata(int a,float b)
      {
          code=a;
          price=b;
      }
      void showdata()
      {
          cout<<"Code= "<<code<<endl;
          cout<<"Price= "<<price<<endl;
      }
};

int const size=2;

int main()
{
    item *p = new item[5];
    item *start = p;
    int x;
    float y;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the code and price of book "<<i+1<<": "<<endl;
        cin>>x>>y;
        p->getdata(x,y);
        p++;
    }
    p = start;
    for(int i=0;i<size;i++)
    {
        cout<<"Details of book"<<i+1<<": "<<endl;
        p->showdata();
        p++;
    }
    return 0;
}
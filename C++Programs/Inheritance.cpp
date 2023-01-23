#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll;

public:
    void getroll()
    {
        cin >> roll;
    }
    void putroll()
    {
        cout << roll;
        cout<<"\n";
    }
};

class marks : public student
{

protected:
    float s1, s2;

public:
    void getmarks()
    {
        cin >> s1 >> s2;
    }

    void putmarks()
    {
        cout << s1 <<"\n"<< s2;
        cout<<"\n";
    }
};

class sports
{
    protected:
     int score;
    public:
     void getscore()
     {
         cin>> score;
     }

     void putscore()
     {
         cout<<score;
         cout<<"\n";
     }
};

class result:public marks,public sports
{
float total;
 public:
  void display()
  {
      putroll();
      putmarks();
      putscore();
       total=s1+s2+score;
       cout<<total;
  }
};

int main()
{
    result r;
    r.getroll();
    r.getmarks();
    r.getscore();

    r.display();
}
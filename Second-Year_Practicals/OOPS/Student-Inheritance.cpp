#include<iostream>
using namespace std;

class student
{
    int roll;
     public:
      void getroll()
      {
          cin>>roll;
      }
      void putroll()
      {
          cout<<roll<<endl;
      }
};

class marks:public student
{
    protected:
     float s1,s2;
   public:
    void getmarks()
    {
        cin>>s1>>s2;
    }
    void putmarks()
    {
        cout<<s1<<s2<<endl;
    }
};

class sports
{
    protected:
     int score;
      public:
       void getscore()
       {
           cin>>score;
       }
       void putscore()
       {
           cout<<score<<endl;
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
      cout<<total<<endl;
  }
};

int main()
{
    result r;
    r.getroll();
    r.getmarks();
    r.getscore();

    r.display();
    return 0;
}
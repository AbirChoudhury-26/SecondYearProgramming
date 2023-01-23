#include <iostream>
using namespace std;

class time
{
    int hours;
    int mins;

public:
    void gettime(int h, int m)
    {
        hours = h;
        mins = m;
    }
    void puttime()
    {
        cout << "Time is " << hours << " hours "
             << "and " << mins << " mins";
        cout << "\n";
    }
    void sum(time t1, time t2)
    {
        mins = t1.mins + t2.mins;
        hours = mins / 60;
        mins = mins % 60;
        hours = t1.hours + t2.hours + hours;
    }
};

//  void time:: sum(time t1,time t2)-
//  {

//      mins=t1.mins+t2.mins;
//      hours=mins/60;
//      mins=mins%60;
//      hours=t1.hours+t2.hours+hours;
//  }

int main()
{

    time T1, T2, T3;

    T1.gettime(2, 45);
    T2.gettime(3, 50);

    T3.sum(T1, T2);

    T1.puttime();
    T2.puttime();
    T3.puttime();
}
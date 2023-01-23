#include <iostream>
using namespace std;
class item
{

    static int count;
    int no;

public:
    void getdata(int a)
    {
        no = a;
        count++;
    }
    void getcount()
    {
        cout << count;
        cout << "\n";
    }
};

int item::count;
int main()
{
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout << "--------------------------";
    cout << "\n";

    a.getcount();
    b.getcount();
    c.getcount();
}

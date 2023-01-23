#include <iostream>
using namespace std;
class integer
{
    int x, y;

public:
    integer()
    {
        x = y = 0;
    }
    integer(int a, int b)
    {
        x = a;
        y = b;
    }

    void show()
    {
        cout << x << " " << y;
        cout << "\n";
    }
};

int main()
{

    integer I1(100, 20);
    integer I2(30, 40);
    integer I3;

    I1.show();
    I2.show();
    I3.show();
}

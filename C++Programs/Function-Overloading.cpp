#include <iostream>
using namespace std;

int volume(int);
double volume(double, int);
long volume(long, int, int);

int main()
{

    cout << volume(10) << "\n";
    cout << volume(5.67, 10) << "\n";
    cout << volume(123, 34, 56);
}

int volume(int a)
{
    return a * a * a;
}

double volume(double r, int h)
{
    return 3.14 * r * r * h;
}

long volume(long l, int b, int h)
{
    return l * b * h;
}
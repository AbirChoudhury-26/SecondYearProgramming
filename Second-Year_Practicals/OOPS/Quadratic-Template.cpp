#include <iostream>
#include <cmath>
using namespace std;

template <class T>
void roots(T a, T b, T c)
{
    T d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << "R1=R2= " << -b / (2 * a) << endl;
    }
    else if (d > 0)
    {
        cout << "Roots are real" << endl;
        T r = sqrt(d);
        T r1 = (-b + r) / (2 * a);
        T r2 = (-b - r) / (2 * a);
        cout << "R1= " << r1 << endl;
        cout << "R2= " << r2 << endl;
    }
    else
    {
        cout << "Roots are complex" << endl;
        float r1 = -b/(2 * a);          //Real part
        float r2 = sqrt(-d) / (2 * a); //Imaginary part
        cout << "Real part= " << r1 << endl;
        cout << "Imaginary part= " << r2 << endl;
    }
}

int main()
{
    cout << "Integer coefficients are:" << endl;
    roots(1, -5, 6);
    cout << "Float Coefficients are:" << endl;
    roots(1.5, 3.6, 5.0);
    return 0;
}
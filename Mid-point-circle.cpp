#include <iostream>
using namespace std;

int main()
{
    int r, c1, c2, pk;
    cout << "Enter the radius and the center coordinates: ";
    cin >> r >> c1 >> c2;
    int x = 0, y = r;
    pk = (5 / 4) - r;
    while (x < y)
    {
        if (pk < 0)
        {
            x = x + 1,
            y = y;
            pk = pk +( 2 * x) + 3;
            cout << x << " " << y << endl;
        }
        else if (pk >= 0)
        {
            x = x + 1;
            y = y - 1;
            pk = pk + 2 * x - 2 * y + 5;
            cout << x << " " << y << endl;
        }
    }
    return 0;
}
#include <iostream>
// #include<graphics.h>
#include<conio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x1, y1, x2, y2;
    cout << "Enter The First Coordinates:  ";
    cin >> x1 >> y1;
    cout << endl;
    cout << "Enter The Second Coordinates:  ";
    cin >> x2 >> y2;
    cout << endl;
    float dx = (float)(x2 - x1);
    float dy = (float)(y2 - y1);
    float m = dy / dx;
    cout<<m<<endl;

    if (m <= 1)
    {
        for (int i = x1; i <= x2; i++)
        {
            cout << i << " " << round(y1) << endl;
            y1 += m;
        }
    }
    else if (m > 1)
    {
        for (int j = y1; j <= y2; j++)
        {
            cout << round(x1) << " " << j << endl;
            x1 += (1 / m);
        }
    }
}
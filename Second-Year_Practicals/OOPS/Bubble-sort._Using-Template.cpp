#include <iostream>
using namespace std;

template <class T>
void bubble(T a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

template <class X>
void swap(X &a, X &b)
{
    X temp = b;
    b = a;
    a = temp;
}

int main()
{
    int x[10] = {4, 3, 2, 1, 9, 14, 20, 11, 6, 15};
    float y[10] = {5.6, 9.0, 2.3, 1.9, 7.8, 3.8, 6.9, 0.2, 4.3, 8.5};
    bubble(x, 10);
    bubble(y, 10);
    cout << "Sorted array of x:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    cout << "Sorted array of y:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << y[i] << " ";
    }
    cout << endl;
    return 0;
}
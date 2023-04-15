#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int r, c;
        cin >> r >> c;
        cout << "Case #" << i << ": "<<endl;
        cout << "..";
        for (int j = 1; j <= c - 1; j++)
            cout << "+-";
        cout << "+" << endl;
        cout << "..";
        for (int j = 1; j <= c - 1; j++)
            cout << "|.";
        cout << "|" << endl;
        for (int k = 0; k < r; k++)
        {
            for (int l = 0; l < c; l++)
                cout << "+-";
            cout << "+" << endl;
            if (k < r - 1)
            {
                for (int l = 0; l < c; l++)
                    cout << "|.";
                cout << "|" << endl;
            }
        }
    }
    return 0;
}
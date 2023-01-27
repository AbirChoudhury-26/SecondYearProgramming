#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin >> q;
    stack<int> s;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int n;
            cin >> n;
            s.push(n);
        }
        else if (t == -1)
        {
            if (s.empty())
                cout << "kuchbhi?" << endl;
            else
            {
                int top = s.top();
                s.pop();
                cout << top << endl;
            }
        }
    }
    return 0;
}
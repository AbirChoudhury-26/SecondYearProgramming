#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return a < b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, s1;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            s1 += s;
        }
        int nc = count(begin(s1), end(s1), 'c');
        int no = count(begin(s1), end(s1), 'o');
        int nd = count(begin(s1), end(s1), 'd');
        int ne = count(begin(s1), end(s1), 'e');
        int nh = count(begin(s1), end(s1), 'h');
        int nf = count(begin(s1), end(s1), 'f');
        cout << min({nc / 2, no, nd, ne / 2, nh, nf}, comp) << endl;
    }
}
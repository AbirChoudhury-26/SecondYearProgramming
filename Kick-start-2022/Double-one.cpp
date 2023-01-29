#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int count=0;
        string str;
        cin >> str;
        vector<int> v(str.length(), 1);
        int n=str.length();
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] < str[i + 1])
                v[i]++;
            else if (str[i] == str[i + 1])
            {
                int j = i;
                while (j < n && str[i] == str[j])
                    j++;
                if (j == n)
                    break;
                else if (str[i] < str[j])
                    v[i]++;
            }
        }
        cout << "Case #" << i << ": ";
        for ( auto it=str.begin();it!=str.end();it++)
        {
            while (v[count]--)
                cout << *it;
            count++;
        }
        cout << endl;
        
    }
    return 0;
}
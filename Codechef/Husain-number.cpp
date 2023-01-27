#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec, v;
    vector<int>::iterator it;
    int n, m, num, c, max;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num); // Taking number in vector initially
    }
    while (!vec.empty())
    {
        max = *max_element(vec.begin(), vec.end()); // Finding the max from vector<vec>
        v.push_back(max);                           // Inserting it in vector <v>
        it = remove(vec.begin(), vec.end(), max);   // Pop out the max value from vector<vec>
        max /= 2;
        if (max > 0)
            vec.push_back(max); // If opeartion performed > 0, push it again in vector<vec> else it have been already removed
    }
    for (int j = 0; j < m; j++)
    {
        cin >> c;
        cout << v[c - 1] << endl;
    }
    return 0;
}

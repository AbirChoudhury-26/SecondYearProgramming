#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Sort Function
    // int n;
    // cin >> n;
    // vector<int> vec(n, 0);
    // for (int i = 0; i < n; i++)
    //     cin >> vec[i];
    // // sort(vec.begin(),vec.end());
    // //     for(auto it:vec)
    // //      cout<<it<<" ";
    // //  cout<<endl;

    // sort(vec.begin() + 1, vec.begin() + 3);

    // for (auto it : vec)
    //     cout << it << " ";
    // cout << endl;
    // // Reverse Function
    // reverse(vec.begin(), vec.end());
    // for (auto it : vec)
    //     cout << it << " ";
    // cout << endl;

    // Maximum and Minimum in index
    // int a[5];
    // for (int i = 0; i < 5; i++)
    //     cin >> a[i];
    // int maxi = INT_MIN;
    // for (int k = 1; k < 5; k++)
    // {
    //     if (a[k] > maxi)
    //         maxi = a[k];
    // }
    // cout<<maxi<<endl;

    //  Max and Min using stl
    // int mini=*min_element(vec.begin(),vec.end());
    // int maxi=*max_element(vec.begin(),vec.end());
    // cout<<mini<<" "<<maxi<<endl;

    // //Sum Function
    // int sum=accumulate(vec.begin(),vec.end(),0);//Syntax:Initial,final,intial sum value
    // cout<<sum<<endl;
    // //Count Function:To Count how many number of times the element comes

    // int cnt= count(vec.begin(),vec.end(),2);
    // cout<<cnt<<endl;

    // Find function:It return an iterator in the range which it is found,pointing to the first instance of the element
    //  auto it=find(vec.begin(),vec.end(),2);
    //   cout<<it-vec.begin()<<endl;

    // Binary Search STL Function:It by default sort the array first and then find the element
    //  bool ans=binary_search(vec.begin(),vec.end(),2);

    // Lower bound:Returns an iterator pointing to the first element not less than x;

    // Imp:Lower bound and Upper bound only work in sorted array

    // auto it=lower_bound(vec.begin(),vec.end(),3);
    // cout<<*it<<endl;

    // Upper bound:Returns an iterator which is just greater than x;
    //  auto it1=upper_bound(vec.begin(),vec.end(),3);
    //  cout<<*it1<<endl;

    // Permutations
    string s = "bac";
    bool ans=next_permutation(s.begin(),s.end());
    cout<<s<<endl;

    


}

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k, f1, f2, j = 0;
//         cin >> n >> k;
//         string s;
//         cin>>s;
//         int l[n]={0};
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] == '1')
//             {
//                 if (s[i + 1] == '1')
//                     l[j]++;
//                 else
//                 {
//                     l[j]++;
//                     j += 1;
//                 }
//             }
//             else if (s[i] == '0')
//             {
//                 if (s[i + 1] == '0')
//                     l[j]++;
//                 else
//                 {
//                     l[j]++;
//                     j += 1;
//                 }
//             }
//         }
//         while(k--)
//         {
//             int maxi=*max_element(l,l+n);
//              if(maxi-2>0)
              
//         }
//     }
// }
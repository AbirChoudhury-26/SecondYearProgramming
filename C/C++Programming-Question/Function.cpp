#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count(int arr[],int j)
{
     cin>>arr[j];
      for(int i=0;i<j;i++)
       cout<<arr[j]<<" ";
       return arr[j];
}

int main()
{
    int a[10];
     int n,k,c,j;
      cin>>n>>k;
       for(int i=0;i<n;i++)
        cin>>a[i];
        c=n;
     for(int i=0;i<n;i++)
     {
         j=i;
          while(k--)
          {
               count(a,j);
                j++;
                k--;
          }
          int n=count(a,j);
           cout<<n;
     }
    return 0;
}
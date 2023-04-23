#include<iostream>
using namespace std;
int main()
{
    int a[4]={1,2,3,4};
    int *p=a++;
    cout<<*p;
    return 0;

}
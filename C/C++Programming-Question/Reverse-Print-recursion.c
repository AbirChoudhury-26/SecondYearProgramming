#include<stdio.h>
#include<string.h>

void reverse(int arr[],int n);
int main()
{
    int arr[5]={1,2,3,4,5},n=5;
     reverse(arr,n);
     return 0;
}


void reverse(int a[],int n)
{
    if(n==0)
     return ;
    else
    {
        printf("%d\n",a[n-1]);
        reverse(a,n-1);
    }
    
}

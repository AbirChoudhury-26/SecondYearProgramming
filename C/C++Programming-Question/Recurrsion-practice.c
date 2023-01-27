#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int show(int);
int main()
{
    int sum;
    sum=show(0);
    printf("%d",sum);
    return 0;
}

int show(int n)
{
    if(n==0)
      return 1;
    // else
    //  return(n+show(n-1));

    
    if(n>0)
     return(n*show(n-1));
}
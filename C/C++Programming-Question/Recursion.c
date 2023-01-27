#include<stdio.h>
#include<string.h>

int fact(int);
int main()
{ int a;
printf("Enter the number:");
scanf("%d",&a);
int ans=fact(a);
printf("%d!=%d",a,ans);
return 0;

}

int fact(int x)
{
    if(x==1)
     return 1;
    else 
     return(x*(fact(x-1)));
}
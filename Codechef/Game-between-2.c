#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b)
      a=a+c;
    else
     b=b+c;

    if(a<b)
     a=a+d;
    else
     b=b+d;
    
if(a>=b)
 printf("N");
else
 printf("S");
 return 0;
}
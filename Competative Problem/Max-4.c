#include<stdio.h>

int max_of_four(int a,int b,int c,int d)// 3465
{
if( a>b && a>c && a>d)
 printf("%d",a);
  else if(b>c && b>d)
   printf("%d",b);
    else if(c>d)
     printf("%d",c);
      else
       printf("%d",d);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
     max_of_four(a, b, c, d);

    
    return 0;
}
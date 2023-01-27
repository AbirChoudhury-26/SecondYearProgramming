#include <stdio.h>

int fact(int num)
{
    int fact1=1;
    if(num==0 || num==1)
       return 1;
     else
     {
        fact1=fact1*num;
      return(fact1*fact(num-1));
     }
}



int main(void)
{
int T;
scanf("%d",&T);
for(int i=0;i<T;i++)
{
    int a;
    scanf("%d",&a);
   int ans=fact(a);
    printf("%d\n",ans);
}
return 0;

}
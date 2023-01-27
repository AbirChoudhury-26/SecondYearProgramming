#include<stdio.h>
#include<string.h>

int main()
{

int a,b,c,ans,f=0,count=0;
scanf("%d%d",&a,&b);

c=a+b;
while(f!=1)
{
     
    for(int i=2;i<c;i++)
    {
        if((c%i)==0)
        {
        count++;
        f=0;
         break;
        }
        else
        {
         count++;
         f=1;
         break;   
        }
    }
}
printf("%d\n",count);
return 0;
}
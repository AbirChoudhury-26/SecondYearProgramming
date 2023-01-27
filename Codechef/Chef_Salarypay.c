#include<stdio.h>
int main()
{
int X,Y,a[30],i,count=0,count1=0,num=0,num1,ans;
printf("Enter the every day amount and bonus:");
scanf("%d%d",&X,&Y);
printf("\nEnter the 30 days number:");
for(i=0;i<30;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<30;i++)
{
    if(a[i]==1)
    {
        count++;
    }
}

for(i=0;i<30;i++)
{
    if(a[i]!=0)
    {
     count1++;
     num1=count1;
     if(num1>num)
     {
         num=num1;
     }
    }
    else
    {
        count1=0;
    }

}

ans=count*(X) + num*(Y);
printf("%d",ans);
 return 0;


}
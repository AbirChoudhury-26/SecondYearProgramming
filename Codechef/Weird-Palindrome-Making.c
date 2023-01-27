#include<stdio.h>
#include<string.h>

int main()
{

int N;
printf("Enter the number of elements:");
scanf("%d",&N);
int a[N],count=0,ans;
printf("\nEnter  %d elements:",N);
for(int i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}


for(int i=0;i<N;i++)
{
    if(a[i]%2==1)
    {
        count++;
    }
}
ans=count/2;
printf("%d\n",ans);


return 0;
    
}
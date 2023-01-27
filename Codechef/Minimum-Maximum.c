#include<stdio.h>
#include<string.h>
int main()
{
int s[10000],n,min,count=0,ans;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&s[i]);
}

for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(s[i]>s[j])
        {
           int temp=s[i];
            s[i]=s[j];
            s[j]=temp; 
        }
    }
}
min=s[0];
for(int i=1;i<n;i++)
{
    count++;
}
ans=count*min;
printf("%d\n",ans);
return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }

        for(int j=0;j<n;j++)
        {
            printf("%d",a[j]);
        }
    }
}
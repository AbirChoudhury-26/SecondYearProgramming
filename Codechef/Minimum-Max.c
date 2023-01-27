#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,j,smaller=99999,ans;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }

        for(int j=0;j<n;j++)
        {
            if(a[j]<smaller)
            {
                smaller=a[j];
            }
        }
        printf("%d\n",smaller);
        ans=smaller*(n-1);
        printf("%d\n",ans);
    }
    return 0;
}
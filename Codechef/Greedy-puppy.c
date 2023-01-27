#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int N,K,ans,max=0;
        scanf("%d %d",&N,&K);
        for(int j=0;j<=K;j++)
        {
        ans=N%K;
        if(ans>max)
        {
            max=ans;
        }
        }

        printf("%d\n",ans);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,k,count=0;
    printf("Enter the number of test cases and number divisible:");
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        if(t%k==0)
        {
            count++;
        }

    }
    printf("%d",count);
    return 0;
}
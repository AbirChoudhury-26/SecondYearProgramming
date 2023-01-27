#include<stdio.h>
int  main()
{
int D,N,sum=0;
scanf("%d%d",&D,&N);

for(int i=0;i<D;i++)
{
    sum=0;
    while(N>0)
    {
        sum=sum+N;
        N--;
    }
    N=sum;
    
}

printf("%d\n",sum);
return 0;

}
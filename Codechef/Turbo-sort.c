#include<stdio.h>
int main()
{
    int t;
	scanf("%d",&t);
	int a[t];
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&a[i]);
	}
	
    int k,l;
    for(k=1;k<t;k++)
    {
       l=k;
       while(l>0 && a[l-1]>a[l] )
       {
        int temp=a[l-1];
            a[l-1]=a[l];
            a[l]=temp;
            l--;
       }
    }
    for(l=0;l<t;l++)
    {
        printf("%d\n",a[l]);
    }
    return 0;
}
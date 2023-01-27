#include<stdio.h>
int main()
{
    int max,a[50]={1,2,3,4,5,6,7,8,0,2,3,4,5,6,7,9,1},i;//K=9
    int n=17;
    int b[50]={0};
    //find maximum by for loop
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            printf("%d\n",max);
        }        
    }
    int count[max+1];
    //initialise count array with zer0
    for(i=0;i<(max+1);i++)
    {
        count[i]=0;
    }
    // fill the array as per the frequency of elements
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    //update count array as the last respective locations of an element and sum values are representing the position of the number last time seen
    for(i=1;i<max+1;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    // cross check for updating of an array
    for(i=1;i<max+1;i++)
    {
        printf("%d ",count[i]);
    }
    printf("\n");
    //fill the array b according to the count array
    for(i=n-1;i>=0;i--)
    {
        b[--count[a[i]]]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}

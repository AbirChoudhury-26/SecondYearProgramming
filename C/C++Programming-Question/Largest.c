#include<stdio.h>
int main()
{
int a[10]={12,10,11,3,0,5,6,7,8,9},l=-999999,sl=-999999,s=-9999999,sum=0;
for(int i=0;i<10;i++)
{
    if(a[i]>l)
    {
        s=sl;
        sl=l;
        l=a[i];
    }
    
    else if(a[i]>sl && a[i]<l)
    {
        s=sl;
        sl=a[i];
    }
   
    else  if(a[i]>s && a[i]<sl)
    {
        s=a[i];
    }

}
printf("%d %d %d",s,sl,l);

return 0;



}
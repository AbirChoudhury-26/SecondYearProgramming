#include<stdio.h>
#include<ctype.h>
int main()
{

int i;
char s[1000];
char count[10];
scanf("%s",&s);
for(i=0;i<10;i++)
{
    count[i]=0;
}

for(i=0;s[i]!='\0';i++)
{ 
    int x=s[i]-'0';
     if(x>=0 && x<=9)
    {
        count[x]++;
    }
}
for(i=0;i<10;i++)
{
    printf("%d ",count[i]);
}
return 0;

}
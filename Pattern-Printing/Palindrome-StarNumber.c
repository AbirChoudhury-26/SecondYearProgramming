#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
      for(k=1;k<=9-i;k++)
      {
          printf("*");
      } 

      for(j=1;j<=i;j++)
      {
          printf("%d*",i);
      }
      
      for(k=1;k<=8-i;k++)
      {
          printf("*");
      } 
      printf("\n");


    }
    return 0;
}
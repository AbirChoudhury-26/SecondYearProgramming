#include<stdio.h>
int main()
{ 
   int sum = 0,n;
   printf("Enter the number of values to be inserted for sum:");
   scanf("%d",&n);
   while(n--) 
   { 
      int x;
      printf("Enter:") ;
      scanf("%d", &x); 
      sum = sum + x; 
   } 
   printf("Sum=%d", sum); 
   return 0;
} 
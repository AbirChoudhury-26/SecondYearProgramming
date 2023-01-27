#include <math.h>
#include <stdio.h>

int main() {
   int  number, squareRoot;

   printf("Enter a number: ");
   scanf("%d", &number);

   // computing the square root
   squareRoot = sqrt(number);

   printf("Square root of %d =  %d", number, squareRoot);

   return 0;
}
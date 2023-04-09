#include<stdio.h>

// int main()
// {
//   int  s[5],i,n;
//   printf("Enter the nth term:");
//   scanf("%d",&n);
//   printf("Enter  the 3 numbers:");
//   for(i=0;i<3;i++)
//   {
//       scanf("%d",&s[i]);
//   }

// // for(i=0;i<3;i++)
// //   {
// //       printf("%d ",s[i]);
// //   }



// for(i=3;i<n;i++)
// {
//     s[i]=s[i-1]+s[i-2]+s[i-3];
//      printf("%d\n",s[i]);
// }


// return 0;
// }

int find_nth_term(int n, int a, int b, int c) {
  int s[n],i,sum;
  s[0]=a;
  s[1]=b;
  s[2]=c;

  
  
  for(i=3;i<n;i++)

{
    s[i]=s[i-1]+s[i-2]+s[i-3];
    //  printf("%d\n",s[i]);
     sum=s[i];
}

printf("%d",sum);
return sum;

}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    // printf("%d", ans); 
    return 0;
}

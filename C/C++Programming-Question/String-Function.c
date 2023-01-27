#include<stdio.h>
#include<string.h>
int main()
{
char name[100],arr[100];
printf("Enter the name: ");
gets(name);
strlwr(name);
printf("%s\n",name);
strupr(name);
printf("%s\n",name);
strrev(name);
printf("%s\n",name);
printf("Enter the array name:");
scanf("%s",&arr);
strcat(name,arr);
printf("%s\n",name);
// strcpy(arr,name);
// printf("%s\n",arr);

return 0;

}
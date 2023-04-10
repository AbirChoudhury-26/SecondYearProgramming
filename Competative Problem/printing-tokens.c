#include<stdio.h>
#include<string.h>
int main()
{

char s[500];
int i;
scanf("%[^\n]", s);
// for(i=0;s[i]!='\0';i++)
// {
//      printf("%c",s[i]);
//      if(s[i]==' ')
//       {
//           printf("\n");
//       }
      
// }
// return 0;
// }
for(i=0;i<strlen(s);i++)
{
    if(s[i]!=' ')
    {
        printf("%c",s[i]);

    }
    else
     printf("\n");
}
return 0;
}
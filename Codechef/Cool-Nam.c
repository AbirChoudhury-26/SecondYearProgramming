#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char str[100];
    int v, ans = 0;
    printf("Enter the string:");
    gets(str);
    int n = strlen(str);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    
    printf("%s\n",str);

  for(int i=0;i<n;i++)
  {
     ans = ans+(i+1)*((str[i]-'a')+1);
  }
    printf("\n%d",ans);
    return 0;
}


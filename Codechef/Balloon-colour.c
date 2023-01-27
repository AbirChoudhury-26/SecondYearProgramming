#include <stdio.h>
#include <string.h>
int main()
{

    char s[100];
    int count = 0, count1 = 0, ans = 0, i;
    printf("Enter the string:");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
        else
        {
            count1++;
        }
    }

    if (count > count1)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'b')
            {
                ans++;
            }
        }
    }
    else if(count1>count)
    {
        
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'a')
            {
                ans++;
            }
        }
    }
    else
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'b')
            {
                ans++;
            }
        }
    }

    printf("%d\n",ans);

    return 0;
}
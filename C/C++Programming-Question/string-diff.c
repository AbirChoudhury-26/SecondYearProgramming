#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int ans;
    printf("Enter the string:");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        ans = str[i] - 'a';
        if (ans == 0)
        {
            printf("Not possible\n");
        }
        else
        {
            printf("%c--->%d\n", ans + 97, ans);
        }
    }
    return 0;
}
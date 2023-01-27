#include <stdio.h>
#include <string.h>
int top = -1;
void push(char);
void pop();
char stack[50];
char str[50];
int main()
{

    int i;
    printf("Enter the string:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }
    printf("Reverse:\n");
    for (i = top; i >= 0; i--)
    {
        pop();
    }
    return 0;
}

void push(char x) // x is used to catch one by one element from str[i]
{

    if (top == 49)
    {
        printf("\nOverflow\n");
    }
    else
    {

        top = top + 1;
        stack[top] = x;
    }
}

void pop()
{

    if (top == -1)
    {
        printf("\nUnderflow\n");
    }

    else
    {

        printf("%c", stack[top]);
        top = top - 1;
    }
}
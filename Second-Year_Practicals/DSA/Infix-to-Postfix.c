#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int top = -1;
char stack[50];
int precedence(char);
void push(char);
char pop();

int main()
{
    char str[50], x;
    printf("Enter the string:");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
            printf("%c", str[i]);
        else if (str[i] == '(')
            push(str[i]);
        else if (str[i] == ')')
        {
            while ((x = pop())!= '(')
                printf("%c", x);
        }
        else
        {
            while (precedence(stack[top]) >= precedence(str[i]))
                printf("%c", pop());
            push(str[i]);
        }
    }
    while (top > -1)
        printf("%c", pop());
    return 0;
}

void push(char x)
{
    if (top == 49)
        printf("\nOverflow");
    else
        stack[++top] = x;
}

char pop()
{
    if (top == -1)
        printf("\nUnderflow");
    else
        return stack[top--];
}

int precedence(char symbol)
{
    if (symbol == '^')
        return 3;
    else if (symbol == '/' || symbol == '*')
        return 2;
    else if (symbol == '+' || symbol == '-')
        return 1;
    else
        return 0;
}
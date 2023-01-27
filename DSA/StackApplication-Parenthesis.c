#include <stdio.h>
#include <string.h>
char str[50], stack[50];
int f = 1;
int top = -1;
void push(char a)
{
    if (top == 49)
    {
        printf("\nOverflow\n");
    }
    else
    {

        top = top + 1;
        stack[top] = a;
    }
}
char pop()
{
    if (top == -1)
    {
        
        f=0;
    }
    else
    {
        printf("\n%c", stack[top]);
        top = top - 1;
    }
}

int main()
{
    char x;
    int i;
    printf("Enter the paranthesis string:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '[' || str[i] == '{' || str[i] == '(')
        {
            push(str[i]);
        }

        else if (str[i] == ']' || str[i] == '}' || str[i] == ')')
        {
            x = pop();
        }
        if (str[i] == ')' && x == '{' || x=='[' )
        {
            f = 0;
        }
        if (str[i] == ']' && x == '{' || x=='(')
        {
            f = 0;
        }
        if (str[i] == '}' && x == '(' || x=='[')
        {
            f = 0;
        
        } 
    }
    if (top > -1)
    {
        f = 0;
    }
    if (f == 1)
    {
        printf("\nBalanced");
    }
    else
    {
        printf("\nNot Balanced");
    }
    return 0;
}
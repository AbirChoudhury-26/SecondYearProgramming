#include <stdio.h>
#include <string.h>

char stack[50];
int f = 1;
int top = -1;

void push(char);
char pop();
int main()
{
  char str[50], x;
  printf("Enter the string:");
  gets(str);
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == '(' || str[i] == '{' || str[i] == '[')
      push(str[i]);
    else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
    {
      x = pop();

      if (str[i] == '}' && (x == '[' || x == '('))
        f = 0;

      if (str[i] == ')' && (x == '[' || x == '{'))
        f = 0;

      if (str[i] == ']' && (x == '{' || x == '('))
        f = 0;
    }
  }
  if (top > -1)
    f = 0;
  if (f == 1)
    printf("\nBalanced");
  else
    printf("\nUnbalanced");
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
    f = 0;
  else
    return stack[top--];
}
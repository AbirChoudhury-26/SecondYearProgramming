#include <iostream>
#include <string>
using namespace std;

void push(int);

int main()
{
    char a[1000], arr[1000];
    int n, m, t;
    printf("Enter  the number of strings:");
    scanf("%d", &n);
    printf("\nEnter the string length:");
    scanf("%d", &m);
    t = n * m;
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &a[i]);
    }

    for (int i = 0; i < t; i++)
    {
        printf("%s", a[i]);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int n,f=0;
    printf("Enter the length:");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the %d elements:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if ((n % 2) == 0)
    {
        f=0;
    }

    else
    {
        for (int i = 0; i < (n / 2); i++)
        {
          if(a[0]==1 && (a[i+1]-a[i])==1)
          {
              f=1;
          }
          else
          {
             f=0;
             break;
             
          }
        }

        for(int i=(n/2);i<n-1;i++)
        {
            if(a[i]-a[i+1]==1)
            {
                f=1;
            }
            else
            {
                f=0;
                break;
            }
        }
    }


    if(f==1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}
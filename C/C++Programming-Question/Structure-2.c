#include<stdio.h>
typedef struct Customers
{
int customerID;
char name[50];
char city[20];
int postalcode[6];
char country[20];
}emp;

int main()
{
   emp s[3];
    int i;
    for(i=0;i<2;i++)
    {
 printf("\nEnter the CustomerID of customer %d:",i+1);
scanf("%d",&s[i].customerID);
fflush(stdin);
printf("Enter the  name of the customer:");
gets(s[i].name);

printf("\nEnter the City of the customer:");
gets(s[i].city);
printf("\nEnter the Postal Code of the customer:");
scanf("%d",&s[i].postalcode);
fflush(stdin);
printf("\nEnter the Country of the customer:");
gets(s[i].country);

    }
    for(i=0;i<2;i++)
    {
        printf("\nCustomerID :%d",s[i].customerID);
        printf("\nName=%s",s[i].name);
        printf("\nCity=%s",s[i].city);
        printf("\nPostal Code :%d",s[i].postalcode);
        printf("\nCountry=%s",s[i].country);
        printf("\n---------------------------------------------------------\n");
  }
return 0;
}
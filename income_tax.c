#include<stdio.h>
int main()
{
    float income,tax_amount;
    int age,tax_percentage;
    char gender;
    tax_percentage=0;
    tax_amount=0;

    printf("Calculate Tax on income\n");
    printf("Enter value for income:");
    scanf("%f",&income);

    printf("Enter value for age:");
    scanf("%d",&age);

    printf("Enter gender(m for Male,f for Female):");
    scanf(" %c",&gender);

    if(income>500000)
        tax_percentage=40;
    if(income>200000)
        tax_percentage=30;
   if(income>100000&&gender=='f')
        tax_percentage=10;
   if(income>100000&&age>60)
        tax_percentage=10;
   if(income>100000&&(age<60&&gender=='m'))
        tax_percentage=20;
     tax_amount=income*tax_percentage/100;
    printf("income tax amount is %f and tax percentage is %d",tax_amount,tax_percentage);
}

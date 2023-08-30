#include<stdio.h>
int main ()
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

    printf("Enter gender(m for male,f for female):");
    scanf(" %c",&gender);

    if(income>500000)
        tax_percentage=40;
    else if(income>200000)
        tax_percentage=30;
    else if(income>100000&&(age>60||gender=='f'))
        tax_percentage=10;
    else if(income>100000&&(age<60&&gender=='m'))
        tax_percentage=20;

    tax_amount=income*tax_percentage/100;
    printf("income on tax_amount is %f and tax_percentage is %d",tax_amount,tax_percentage);
}

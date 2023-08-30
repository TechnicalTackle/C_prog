#include<stdio.h>
#include<stdlib.h>
int main()
{
    float input1,input2,result;
    char option;

    printf("Enter 1st input:");
    scanf("%f",&input1);
    printf("Enter 2nd input:");
    scanf("%f",&input2);

    printf("Enter A for Addition:\n");
    printf("Enter S for Subtraction:\n");
    printf("Enter M for Multiplication:\n");
    printf("Enter D for Division:\n");
    printf("Enter E for Exit:\n");
    printf("Enter O for Arithmetic Operations:");

    scanf(" %c",&option);

    switch(option)
    {
    case 'A':
        result=input1+input2;
        break;
    case 'S':
        result=input1-input2;
        break;
    case 'M':
        result=input1*input2;
        break;
    case 'D':
        result=input1/input2;
        break;
    case 'E':
        exit(0);
    default:
        printf("Sorry Wrong Option\n");
        exit(0);
    }
     printf("result=%f",result);
}

#include<stdio.h>
int main ()
{
    int a,remainder;
    printf("To check number is even or odd\n");
    printf("enter value for a:");
    scanf("%d",&a);
    remainder=a%2;
    printf("Remainder of a is divided by 2:%d\n",remainder);
    if(remainder==0)
        printf("%d is even ",a);
    else
        printf("%d is odd ",a);
}

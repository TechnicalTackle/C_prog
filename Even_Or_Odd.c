#include<stdio.h>
int main()
{
    int a,remainder;
    printf("To check a number is Even or Odd\n");
    printf("Enter a number a:");
    scanf("%d",&a);
    remainder=a%2;
    printf("remainder of a divided by 2 is:%d",remainder);
}

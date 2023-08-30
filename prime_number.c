#include<stdio.h>
int main()
{
    int i,num;
    printf("a number is prime or not\n");
    printf("enter a value for number:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("%d number is not prime",num);
            break;
        }
    }
    if(num==i)
    printf("%d number is prime",num);
}

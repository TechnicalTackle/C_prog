#include<stdio.h>
int main()
{
    float principal_amount,rate,simple_interest;
    int duration;
    printf("Enter the principal amount\n");
    scanf("%f",&principal_amount);
    printf("Enter the rate of interest\n");
    scanf("%f",&rate);
    printf("Enter duration in years\n");
    scanf("%d",&duration);
    simple_interest=(principal_amount*rate*duration)/100;
    printf("principal_amount=%f\nrate:%f\nduration:%d\nsimple_interest=%f\n",principal_amount,rate,duration,simple_interest);
}

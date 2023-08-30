#include<stdio.h>
int main()
{
    float percentage;
    printf("Calculate Division by score\n");
    printf("Enter percentage\n");
    scanf("%f",&percentage);
    if(percentage>=60)
        printf("First Division");
    if(percentage>=50 && percentage<60)
        printf("Second Division");
    if(percentage>=40 && percentage<50)
        printf("Third Division");
    if(percentage<40)
        printf("Failed");
}

#include<stdio.h>
int main()
{
    int i;
    printf("Program for switch statement\n");
    printf("Enter the value:");
    scanf("%d",&i);
    switch(i)
    {
        case 1:printf("you have pressed 1st switch\n");
        break;
        case 2:printf("you have pressed 2nd switch\n");
        break;
        case 3:printf("you have pressed 3rd switch\n");
        break;
        case 4:printf("you have pressed 4th switch\n");
        break;
        default:printf("default case");
    }
}

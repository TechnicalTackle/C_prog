#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value for A & B:");
    scanf("%d%d",&a,&b);

    if(!(a>b))
        printf("A is Greater than B");
    else
        printf("A is less than B");
}

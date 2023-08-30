#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Swapping Program\n");
    printf("Enter value for a\n");
    scanf("%d",&a);
    printf("Enter value for b\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}

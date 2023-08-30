#include<stdio.h>
int main()
{
int i;
for(i=1;;i++)
{
    printf("%d\n",i);
    if(i>=20)
        break;
}
}

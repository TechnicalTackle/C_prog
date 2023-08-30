#include<stdio.h>
int main ()
{
    int i,input,result;
    char response;
    printf("multiplication program\n");
    printf("enter value for input:");
    scanf("%d",&input);
    for(i=1;i<=10;i++)
    {
        result=input*i;
        printf("%d*%d=%d\n",input,i,result);
        if(i==10)
        {
            printf("do you want continue or not(Y for yes and N for No):");
            scanf(" %c",&response);
            if(response=='Y')
            {
                printf("enter input:");
                scanf("%d",&input);
                i=0;
                continue;
            }
                else
                    break;
            }
        }
    }



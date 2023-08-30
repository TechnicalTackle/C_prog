#include<stdio.h>
int main ()
{
  float bill_amount,discount_amount,final_amount;
  int discount_percentage;
  printf("Calculate discount price\n");
  printf("enter bill amount\n");
  scanf("%f",&bill_amount);
  if(bill_amount >= 2000)
  {
      discount_percentage=20;
  }
  else
  {
   if(bill_amount >= 1000)
    discount_percentage=10;
    else
      discount_percentage=0;
  }
  discount_amount=bill_amount*discount_percentage/100;
  final_amount=bill_amount-discount_amount;
  printf("discount on bill amount=%f is %d percent\n final bill is=%f",bill_amount,discount_percentage,final_amount);
}


#include<stdio.h>
int main()
{
float amount,discount,final_amount;
printf("enter amount you spent\n:");
scanf("%f",&amount);
discount=amount*(5/100);
if(amount>0&&amount<=1000)
{
discount=0.05;
}
else if(amount>1000&&amount<=5000)
{
discount=0.1;
}
else
{
discount=0.2;
}
final_amount=amount-amount*discount;
printf(final_amount);
}


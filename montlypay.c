#include<stdio.h>
int main()
{
float hours_worked,rate_per_hour,weeks_in_month,monthly_pay;
printf("enter hours_worked,rate_per_hour,weeks_in_month\n:");
scanf("%f%f%f",&hours_worked,&rate_per_hour,&weeks_in_month);
monthly_pay=hours_worked*rate_per_hour*weeks_in_month;
printf("monthly pay of an employ is :%f\n",monthly_pay);
}

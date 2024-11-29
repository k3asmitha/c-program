#include<stdio.h>
int main()
{
float number,negative,positive,zero;
printf("enter any real number\n:");
scanf("%f",&number);
if(number>0)
{
printf("the number is positive:%f\n",positive);
}
else if(number<0)
printf("the number is negative:%f\n",negative);
else
printf("the number is zero:%f\n",zero);
}


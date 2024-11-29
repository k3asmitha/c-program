#include<stdio.h>
int main()
{
int seconds,hours,minutes;
printf("enter seconds\n:");
scanf("%d",&seconds);
minutes=seconds/60;
hours=minutes/60;
printf("time in minutes :%d\n",minutes);
printf("time in hours:%d\n",hours);
}

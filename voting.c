#include<stdio.h>
int main()
{
int age;
printf("enter any your age\n:");
scanf("%d",&age);
if(age>=18)
{
printf("your are eligible for voting:%d\n",age);
}
else
printf("your are not eligible for voting:%d\n",age);
}


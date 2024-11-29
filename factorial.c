#include<stdio.h>
int main()
{
int fact,i,n;
printf("enter any value");
scanf("%d",&n);
i=1;
fact=1;
while(i<=n)
{
fact=fact*i;
i++;
}
printf("%d is factorial of the number entered\n",fact);
}

#include<stdio.h>
int main()
{
int a=0,b=1,fabii,i=3,n;
printf("enter limit value");
scanf("%d",&n);
while(i<=n)
{
fabii=a+b;
printf("%d\n",fabii);
a=b;
b=fabii;
i=i+1;
}
}

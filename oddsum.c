#include<stdio.h>
int main()
{
int i,n,sum;
printf("enter any number till you want to print sum of  numbers");
scanf("%d",&n);
i=1;
sum=0;
while(i<=n)
 {
 sum=sum+i;
 i=i+2;
 }
 printf("%d\n",sum);
}

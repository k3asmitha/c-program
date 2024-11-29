#include<stdio.h>
int main()
{
int n,i,last_num;
printf("enter any value\n ");
scanf("%d",&n);
for (i=0;i<=n;i++)
  {
    last_num=n%10;
    printf("%d",last_num);
    n=n/10;
 }
 }

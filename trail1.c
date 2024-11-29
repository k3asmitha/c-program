#include<stdio.h>
int main()
{
int marks[5],i;
float sum=0,avg;
printf("enter 5 marks ");
for(i=0;i<5;i++)
{
 scanf("%d",&marks[i]);
 sum=sum+marks[i];
}
avg=sum/5;
printf("sum=%f",sum);
printf("average=%f",avg);
}


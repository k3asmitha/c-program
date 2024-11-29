#include<stdio.h>
int average(int marks[]);
int main()
{
float b;
int marks[5]={99,90,95,94,92};
b=average(marks);
printf("%f",b);
}
int average(int marks[])
{
int i,sum=0;
float ave;
for(i=0;i<5;i++)
{
sum=sum+marks[i];
}
ave=sum/5;
return ave;
}


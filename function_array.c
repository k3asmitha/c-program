#include<stdio.h>
int display(int marks[]);
int main()
{
int marks[5]={99,90,95,94,92};
display(marks);
}
int display(int marks[])
{
int i;
for(i=0;i<5;i++)
{
printf("%d\n",marks[i]);
}
}

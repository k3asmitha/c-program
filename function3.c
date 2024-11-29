#include<stdio.h>
int sum (); //Function declaration/prototype
int main() // main() starts the program execution
{
 sum();
}
int sum() //Function definition
{
 int a,b,sum;
 printf("enter two numbers\n");
 scanf("%d%d",&a,&b);
 sum=a+b;
 printf("sum of two numbers is %d\n",sum);
}

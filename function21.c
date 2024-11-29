#include<stdio.h>
int square(int);
int main()
{
 int num1,num2, res1,res2;
 printf("Enter two number\n");
 scanf("%d%d", &num1,&num2);
 res1=square(num1);
 res2=square(num2);
 printf("Square of %d, %d= %d,%d respectively", num1,num2,res1,res2);
}
int square(int x)
{
 return (x*x);
}

#include<stdio.h>
int square(int);
int main()
{
int num,res;
printf("enter a number\n");
scanf("%d",&num);
res=square(num);
printf("square of the entered number is %d",res);
}
int square(int x)
{
 return(x*x);
}


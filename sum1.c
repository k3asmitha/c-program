//without argument and without returntype 
#include<stdio.h>
int sum();
int main()
{
int c;
c=sum();
printf("sum  of the two numbers is %d",c);
}
int sum()
{
 int a,b;
 printf("enter two  numbers\n");
 scanf("%d%d",&a,&b);
 return(a+b);
}


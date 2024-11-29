//with argument and without returntype 
#include<stdio.h>
 void sum();
int main()
{
sum();
}
void sum()
{
 int a,b;
 printf("enter two  numbers\n");
 scanf("%d%d",&a,&b);
 int c;
 c=a+b;
printf("sum  of the two numbers is %d",c);
}


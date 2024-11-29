//with argument and with return type 
#include<stdio.h>
int sum(int,int);
int main()
{
int c,a,b;
printf("enter two  numbers\n");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("sum  of the two numbers %d %d is %d",a,b,c);
}
int sum(int a,int b)
{
 return(a+b);
}


#include<stdio.h>
int a,b,c;
int largest ();  
int main() 
{
printf("enter three numbers value numbers\n");
scanf("%d%d%d",&a,&b,&c);
largest();
}


int largest() 
{
 if(a>b&&a>c)
 {
 printf("a is largest");
 }
 else if (b>c&&b>a)
 {
 printf("b is gretest");
 }
 else
 printf("c is gretest");
}

#include<stdio.h>
int main()
{
int a,x;
 printf("enter any number");
 scanf("%d",&x);
 
   if(x%a==0)
   {
     while(a<x)
    {
     a=a+1;
     printf("the number is not prime number");
    }
   }
   else 
    printf("the number is a prime number");

}


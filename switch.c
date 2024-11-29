#include<stdio.h>
int main()
{
int a,b,c,s,choice;
printf("enter the two numbers\n");
scanf("%d%d",&a,&b);
printf("1:addition,2:subtraction,3:multiplication,4:division\n");
printf("enter your operator what you need to perofrm\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
 s=a+b;
 printf("%d",s);
 break;
case 2:
 s=a-b;
 printf("%d",s);
 break;
case 3:
 s=a*b;
 printf("%d",s);
 break;
case 4:
 s=a/b;
 printf("%d",s);
 break;
 default:
 printf("sorry your choice is not available\n"); 
}
}











#include<stdio.h>
int main()
{
int a1,a2,a3;
printf("p1 enter your age a1\n:");
scanf("%d%d%d",&a1,&a2,&a3);
if(a1>a2)
{
 if(a1>a3)
 {
 printf("%d is greater",a1);
 }
} 
else if(a2>a3)
 {
  if(a2>a1)
  {
  printf("%d is greater",a2);
  }
 }  
else
{
printf("%d is greater",a3);
}
}

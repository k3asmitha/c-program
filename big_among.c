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
 printf("%d is greater\n",a1);
 }
 else
 {
 printf("%d is gerater\n",a3);
 }
} 
else if(a2>a3)
 {
 printf("%d is greater\n",a2);
 } 
else
{
printf("%d is greater\n",a3);
printf("END OF THE PROGRAM\n");
}
}

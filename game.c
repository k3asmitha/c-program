#include<stdio.h>
int main()
{
int a,b,c,discriminant;
printf("enter a,b,c values\n:");
scanf("%d%d%d",&a,&b,&c);
discriminant=b*b-4*a*c;
if(discriminant>0)
{
printf("congrats you recieved 20 points:%d\n",20);
}
else if(discriminant==0)
{
printf("congrats you recieved no points:%d\n",0);
}
else
printf("congrats you recieved 10 points:%d\n",10);
printf("end of the program\n");
}

#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,dis;
float root1,root2,root,discriminant;
printf("enter 3 values\n");
scanf("%d%d%d",&a,&b,&c);
discriminant=b*b-4*a*c;
printf("%f is your dis\n",discriminant);
printf("make a choice 1:dis>0,2:dis<0,3:dis=0\n");
scanf("%d",&dis);
switch(dis)
{
case 1:
root1=(-b+(b*b-4*a*c)^(1/2))/2*a;
root2=(-b-(b*b-4*a*c)^(1/2))/2*a;
printf("%f\n%f\n roots of the quadratic equation",root1,root2);
break;
case 2:
printf("they have complex roots");
break;
case 3:
root=(-b+(b*b-4*a*c)^(1/2))/2*a;
printf("they have eual roots %f",root);
break;
}
}

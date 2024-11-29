#include<stdio.h>
int main()
{
int a,b,c,dis;
float roots,root1,root2;
printf("enter the values of a,b,c\n ");
scanf("%d%d%d",&a,&b,&c);
dis=b*b-4*a*c;
switch(dis>0)
{
case 1 :
printf("the roots are real and distinct\n");
root1=(-b+(dis)^(1/2))/2*a;
root2=(-b-(dis)^(1/2))/2*a;
printf("%f\n",root1);
printf("%f\n",root2);
break;
case 0:
 switch(dis==0)
 {
 case 1:
 printf("the roots are real and equal\n");
 roots=(-b+(dis)^(1/2))/2*a;
 printf("%f\n",roots);
 break;
 case 0:
 printf("the roots are not real and complex roots\n");
 root1=(-b+(dis)^(1/2))/2*a;
 root2=(-b-(dis)^(1/2))/2*a;
 printf("%f\n",root1);
 printf("%f\n",root2);
 break;
break;
}
}
}

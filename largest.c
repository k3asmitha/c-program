#include<stdio.h>
int main()
{
int a1,a2,a3;
printf("p1 enter your age a1\n:");
scanf("%d%d%d",&a1,&a2,&a3);
if(a1>a2&&a1>a3)
{
printf("a1 is larger:%d\n",a1);
}
else if(a2>a1&&a2>a3)
{
printf("a2 is larger:%d\n",a2);
}
else
printf("a3 is larger:%d\n",a3);
}


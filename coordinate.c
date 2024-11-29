#include<stdio.h>
int main()
{
int x,y;
printf( "enter x,y real coordinates \n:");
scanf("%d%d",&x,&y);
if(x>0&&y>0)
{
printf("point lies in first quadrant\n");
}
else if(x>0&&y<0)
{
printf("point lies in fourth quadrant\n");
}
else if(x<0&&y<0)
{
printf("point lies in third quadrant\n");
}
else if(x<0&&y>0)
{
printf("point lies in second quadrant\n");
}
else
printf("the point is origin\n");
printf("end of the program\n");
}

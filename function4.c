#include<stdio.h>
int a,s,p;
int area (); 
int perimeter (); 
int main() 
{
printf("enter a value numbers\n");
scanf("%d",&a);
area();
perimeter();
}


int area() 
{
 s=a*a;
 printf("area of square is %d\n",s);
}


int perimeter()
  {
  p=a+a;
  printf("perimeter of square is %d\n",p);
  }
  


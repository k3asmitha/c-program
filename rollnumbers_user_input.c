#include<stdio.h>
int main()
{
int i;
int rollno[8];
printf("enter roll no:\n");
for(i=0;i<8;i++)
 {
  scanf("%d",&rollno[i]);
  printf("%d\n",rollno[i]);
 }
printf("%d\n",rollno[8]);
printf("end of the program\n");
}


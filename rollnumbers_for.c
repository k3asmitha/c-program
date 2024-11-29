#include<stdio.h>
int main()
{
int i;
int n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int rollno[n]; 
printf("Enter %d elements of the array:\n", n);
for(i=0;i<n;i++)
 {
  scanf("%d",&rollno[i]);
  printf("%d\n",rollno[i]);
 }
}


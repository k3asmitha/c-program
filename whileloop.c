/*#include<stdio.h>
int main()
{
int sum=0,i=1,n;
printf("enter any value");
scanf("%d",&n);
while (i<=n)
{
sum=sum+i;
i++;
}
printf("total sum is %d",sum);
}
*/
#include<stdio.h>
int main()
{
int fac=1,i=1,n;
printf("enter any value");
scanf("%d",&n);
while (i<=n)
{
fac=fac*i;
i++;
}
printf("total factorial of the number is %d\n",fac);
}


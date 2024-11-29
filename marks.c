#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,average,Agrade,Bgrade,Cgrade,Fgrade;
printf("enter marks of mat,phy,che,bio,eng\n:");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
average=(s1+s2+s3+s4+s5)/5;
if(average>80)
{
printf("you got A grade:%d\n",average);
}
else if(average>60&&average<80)
{
printf("you got B grade:%d\n",average);
}
else if(average>40&&average<60)
{
printf("you got C grade:%d\n",average);
}
else
printf("you got F grade :%d\n",average);
}


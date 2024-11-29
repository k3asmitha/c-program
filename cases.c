#include<stdio.h>
int main()
{
char alphabet;
printf("enter any alphabet\n:");
scanf("%c",&alphabet);
if(alphabet>='a'&&alphabet<='z')
{
printf("alphabet is LOWERCASE:%c\n",alphabet);
}
else if(alphabet>='A'&&alphabet<='Z')
printf(" aiphabet is UPPERCASE:%c\n",alphabet);
}

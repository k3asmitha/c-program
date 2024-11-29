#include<stdio.h>
int main()
{
float weight,height,BMI;
printf("enter your height,weight\n:");
scanf("%f%f",&height,&weight);
BMI=weight/(height*height);
if(BMI<18.5)
{
printf("you are in under weight categeroy:%f\n",BMI);
}
else if(BMI>=18.5&&BMI<=24.9)
{
printf("you are in normal weight categeroy:%f\n",BMI);
}
else
printf("you are in over weight categeroy:%f\n",BMI);
printf("end of the program\n");
}

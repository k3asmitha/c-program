#include<stdio.h>
int main()
{
int rows ;
printf("no of lines you want:\n");
scanf("%d",&rows);
for (int i = 0; i < rows; i++)
 {
        for (int j = 0; j < 2*i + 1; j++) 
        {
            printf(" * ");
        }
        printf("\n");
        }   
}


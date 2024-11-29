#include <stdio.h>
int EvenOdd(int x) 
{
    if (x%2==0)
        return 0;
    else 
        return 1;
    
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (EvenOdd(number))
        printf("%d is a odd number.\n", number);
    else
        printf("%d is a even number.\n", number);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("The Two Numbers Before Interchanged : %d and %d", num1, num2);
    num3 = num2;
    num2 = num1;
    num1 = num3;
    printf("\nThe Two Numbers Interchanged : %d and %d", num1, num2);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n1, n2;
    printf("Enter 4 Digit Number: ");
    scanf("%d", &a);
    n2 = a%10;
    n1 = a/1000;
    printf("\nSum of the First Digit %d and Last Digit %d is: %d\n", n1, n2, n1 + n2);
    return 0;
}

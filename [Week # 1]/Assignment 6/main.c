#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, n1, n2, n3, n4;
    printf("Input Your 4 Digit Number: ");
    scanf("%d", &a);
    b=a;
    n4 = b%10;
    b = b/10;
    n3 = b%10;
    b = b/10;
    n2 = b%10;
    b = b/10;
    n1 = b%10;
    b = b/10;
    printf("\nThe Reversed output of your 4 digit number %d is: %d%d%d%d\n", a, n4, n3, n2, n1);
    return 0;
}

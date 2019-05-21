#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c = 0;
    printf("Input a Number: ");
    scanf("%d", &a);
    b = a;
    while(a != 0)
    {
        c *= 10;
        c += a%10;
        a /= 10;
    }
    if(b == c)
    {
        printf("The Number is Palindrome.\n");
    }
    printf("Reversed number is = %d", c);
    return 0;
}

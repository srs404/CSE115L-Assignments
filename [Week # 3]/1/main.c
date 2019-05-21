/*
    Name: MD. Samiur Rahman
    ID: 1831527642
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, fact = 1, a;
    printf("Enter Number: ");
    scanf("%d", &a);
    n = a;
    while(a != 1)
    {
        fact = fact * a;
        a--;
    }
    printf("Factorial number of %d is: %d", n, fact);
    return 0;
}

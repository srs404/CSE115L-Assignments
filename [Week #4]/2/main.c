#include <stdio.h>
#include <stdlib.h>
void power(int a, int b);

int main()
{
    int c, d;
    printf("Enter Number: ");
    scanf("%d", &c);
    printf("Powered by: ");
    scanf("%d", &d);
    power(c, d);
    return 0;
}
void power(int a, int b)
{
    int pows = 1;
    while(b > 0)
    {
        pows = pows * a;
        b--;
    }
    printf("Value is: %d", pows);
}

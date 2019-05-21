#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, power;
    printf("Enter 1st Positive Integer: ");
    scanf("%d", &n);

    printf("Multiplied By: ");
    scanf("%d", &m);

    if(m >= 0 && n >= 0)
    {
        power = multi(n, m);
        printf("%d Multiplied By %d is: %d", n, m, power);
    }
    else
    {
        printf("Both of the Values Should be Positive Integer!");
    }
}

int multi(int a, int b)
{
    if(b > 1)
    {
        b--;
        return a * multi(a, b);
    }
}

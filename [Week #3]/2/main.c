#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, z, r = 0;
    printf("Enter Number: ");
    scanf("%d", &x);
    printf("Powered by: ");
    scanf("%d", &z);
    r = x;
    while(z != 1)
    {
        x = x * r;
        z--;
    }
    printf("Your Number is: %d", x);
    return 0;
}

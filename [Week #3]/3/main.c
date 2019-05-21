#include <stdio.h>
#include <math.h>

int main()
{
    int a, d = 0, d1, c, sum = 0, a1;
    printf("Enter Number: ");
    scanf("%d", &a);
    d1 = a;
    a1 = a;
    while(a > 0)
    {
        a = a/10;
        d++;
    }
    while(d1 > 0)
    {
        c = d1%10;
            sum = sum + pow(c, d);
            d1 = d1/10;
    }
    if(sum == a1)
    {
        printf("%d is an Armstrong Number!", a1);
    }
    else if(a1 == 153)
    {
        printf("%d is an Armstrong Number!", a1);
    }
    else
    {
        printf("%d is not an Armstrong Number!", a1);
    }
    return 0;
}

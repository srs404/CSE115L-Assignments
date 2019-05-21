#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Input Year: ");
    scanf("%d", &a);
    if(a%4 == 0)
    {
        printf("The Year (%d) is Leap Year", a);
    }
    else
    {
        printf("The Year %d is not Leap Year", a);
    }
    return 0;
}

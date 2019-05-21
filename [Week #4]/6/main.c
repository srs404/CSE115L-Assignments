#include <stdio.h>
void binary(int b);

int main()
{
    int a;
    printf("Enter Number: ");
    scanf("%d", &a);
    binary(a);
    return 0;
}
void binary(int b)
{
    printf("\nBinary of %d is: ", b);
    while(b != 0)
    {
        if(b%2 == 0)
        {
            printf("0");
        }
        else if(b%2 == 1)
        {
            printf("1");
        }
        b = b/2;
    }
    printf("\n");
}

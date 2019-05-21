#include <stdio.h>
void digit(int s);

int main()
{
    int a;
    printf("Enter Positive Number: ");
    scanf("%d", &a);
    digit(a);
    return 0;
}
void digit(int s)
{
    int a = 0, b;
    while(s != 0)
    {
        b = s%10;
        a = a + b;
        s = s/10;
    }
    printf("Sum of Digit is: %d", a);
}

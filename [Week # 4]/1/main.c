#include <stdio.h>
#include <stdlib.h>
void factorial(int n);

int main()
{
    int a, b;
    printf("Enter Number: ");
    scanf("%d", &a);
    factorial(a);
    return 0;
}
void factorial(int n)
{
    int fact = 1;
    while(n != 0)
    {
        if(n == 0)
        {
            break;
        }
        else if(n < 0)
        {
            printf("Please Enter Positive Value!\n");
            break;
        }
        else
        {
            fact = fact * n;
            n--;
        }
    }
    printf("Factorial Number is: %d", fact);
}

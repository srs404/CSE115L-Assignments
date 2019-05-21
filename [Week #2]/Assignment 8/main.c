#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter the Result of A: ");
    scanf("%d", &a);
    printf("Enter the Result of B: ");
    scanf("%d", &b);
    if(a >= 55 && b >= 45)
    {
        printf("The Student Passed!");
    }
    else if(a <= 45 && b >= 55)
    {
        printf("The Student Passed!");
    }
    else if(b < 45 && a >= 65)
    {
        printf("The student is allowed to reappear in an examintaion in B to qualify.");
    }
    else
    {
        printf("The Student Failed!");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opt, a, fac = 1, p;
    printf("1. Factorial of a number.\n");
    printf("2. Prime or not.\n");
    printf("3. Odd or Even.\n");
    printf("4. Exit");
    printf("\nChoose: ");
    scanf("%d", &opt);
    if(opt > 0 && opt < 5)
    {
        switch(opt)
        {
            case 1: //This is Factorial Number
                printf("\nEnter Numbers for Factorial: ");
                scanf("%d", &a);
                while(a != 0)
                {
                    fac = fac * a;
                    --a;
                }
                printf("Factorial Number is: %d", fac);
                break;
            case 2: //This is prime or not
                printf("Prime Number upto: ");
                scanf("%d", &p);
                a = p;
                while(p != 0)
                {
                    if(p%2 > 0)
                    {
                        printf("%d, ", p);
                    }
                    p--;
                }
                if(a%2 > 0)
                {
                    printf("\n\nAnd, %d is a Prime Number.\n", a);
                }
                else
                {
                    printf("\n\nAnd, %d is not a Prime Number\n", a);
                }
                break;
            case 3:
                printf("Enter Number: ");
                scanf("%d", &a);
                if(a%2 == 0)
                {
                    printf("%d is Even Number.", a);
                }
                else if(a%2 == 1)
                {
                    printf("%d is Odd Number.", a);
                }
                break;
            case 4:
                printf("Thanks for using my tool of Assignment 10");
                break;
        }
    }
    else
    {
        printf("There is no option for that.");
    }
    return 0;
}

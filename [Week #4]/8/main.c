#include<stdio.h>
void gcd(int a,int b);
void lcd(int a,int b);

int main()
{
    int a, b;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    gcd(a, b);
    lcd(a, b);
}
void gcd(int a, int b)
{
    int i, n = 0, r = 0;
    for(i = 1; i < a; i++)
    {
        if(a%i == 0)
        {
            n++;
        }
    }
    for(i = 1; i < b; i++)
    {
        if(b%i == 0)
        {
            r++;
        }
    }
    if(n > r)
    {
        printf("GCD is: %d\n", a);
    }
    else if (r>n)
    {
        printf("GCD is: %d\n", b);
    }
    else if(r == n)
    {
        printf("GCD and LCD of %d and %d are the Same\n", a, b);
    }
}
void lcd(int a, int b)
{
    int i, n = 0, r = 0;
    for(i = 1; i < a; i++)
    {
        if(a%i == 0)
        {
            n++;
        }
    }
    for(i = 1; i < b; i++)
    {
        if(b%i == 0)
        {
            r++;
        }
    }
    if(n < r)
    {
        printf("LCD is: %d", a);
    }
    else if(r < n)
    {
        printf("LCD is: %d", b);
    }
    else if(r == n)
    {
        printf("GCD and LCD of %d and %d are the Same", a, b);
    }
}

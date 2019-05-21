#include <stdio.h>
#include <stdlib.h>
void isPalindrome(int a);

int main()
{
    int a, b;
    printf("Enter Number: ");
    scanf("%d", &a);
    isPalindrome(a);
    return 0;
}
void isPalindrome(int a)
{
    int b, c, rev = 0;
    c = a;
    while(a != 0)
    {
        b = a%10;
        rev = rev*10 + b;
        a /= 10;
    }
    printf("Reversed Number is: %d\n", rev);
    if(c == rev)
    {
        printf("\nIt's a Palindrome Number!\n");
    }
    else if(c != rev)
    {
        printf("\nIt's not a Palindrome Number!\n");
    }
}

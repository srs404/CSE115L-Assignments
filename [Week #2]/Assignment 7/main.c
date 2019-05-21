#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Enter Character: ");
    scanf("%c", &a);
    if(a >= 'A' && a <= 'Z')
    {
        printf("Your Character is an Uppercase Character.", a);
    }
    else if(a >= '0' && a <= '9')
    {
        printf("Your Character is a Number");
    }
    else if(a >= 'a' && a <= 'z')
    {
        printf("Your Character is a Lowercase Character");
    }
    else if(a >= 0 && a <= 47)
    {
        printf("Your Character is ASCII Value");
    }
    else if(a >= 58 && a <= 64)
    {
        printf("Your Character is ASCII Value");
    }
    else if(a >= 91 && a <= 96)
    {
        printf("Your Character is ASCII Value");
    }
    else if(a >= 123 && a <= 127)
    {
        printf("Your Character is ASCII Value");
    }
    return 0;
}

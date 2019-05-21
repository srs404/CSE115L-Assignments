#include <stdio.h>
int digit(char a[100], char b);

int main()
{
    char a[100], b;
    int d;
    printf("Enter String: ");
    gets(a);
    printf("Enter Character: ");
    scanf("%c", &b);
    d = digit(a, b);
    printf("%c is present %d times in %s", b, d, a);
    return 0;
}

int digit(char a[100], char b)
{
    int i, d = 0;
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == b)
        {
            d++;
        }
    }

    return d;
}

#include <stdio.h>

int main()
{
    char a[100];
    int n = 0, i;
    printf("Enter Integer String: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        n = n*10 + a[i] - 48;
    }
    printf("Integer of String is: %d", n);
}

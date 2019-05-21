#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100], b[100];
    int i, k=0;
    printf("Enter String: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 48 && a[i] <= 57)
        {
            printf("%c", a[i]);
        }
    }
    return 0;
}

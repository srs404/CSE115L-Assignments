#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20];
    int len = 0;

    printf("Enter String: ");
    gets(a);

    length(&a, &len);

    printf("Length of String is: %d", len);
}

void length(char *lenptr, int *len)
{
    int i;
    for(i = 0; *(lenptr+i) != '\0'; i++)
    {
        *len = *len + 1;
    }
}

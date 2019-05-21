#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[100];
    int len;
    printf("Enter String: ");
    gets(n);
    upper(n);
}
void upper(char n[100])
{
    int i;
    for(i = 0; n[i] != '\0'; i++)
    {
        if(n[i] >= 'a' && n[i] <= 'z')
        {
            n[i] = n[i] - 32;
        }
    }
    printf("\nModified String is: %s\n", n);
}


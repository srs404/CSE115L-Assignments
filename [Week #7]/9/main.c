#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50], b[50];
    int i, k = 0, count = 1;
    printf("Enter String: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == ' ')
        {
            count++;
        }
        else if(a[i] != ' ')
        {
            b[k] = a[i];
            k++;
        }
    }
    b[k] = '\0';
    printf("There are %d words\nModified String: %s", count, b);
    return 0;
}

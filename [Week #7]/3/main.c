#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50], b[50];
    int i, k = 0;
    printf("Enter String: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == ' ' && a[i+1] != ' ')
        {
            b[k] = a[i];
            k++;
        }
        else if(a[i] == ' ' && a[i+1] == ' ')
        {

        }
        else
        {
            b[k] = a[i];
            k++;
        }
    }
    b[k] = '\0';
    printf("%s", b);
    return 0;
}

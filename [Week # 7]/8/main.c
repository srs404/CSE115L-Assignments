#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50], b[50];
    int i, k = 0, spcl = 0;
    printf("Enter String: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
        {
            b[k] = a[i];
            k++;
        }
        else if(a[i] == ' ')
        {
            b[k] = a[i];
            k++;
        }
        else if(a[i] >= 48 && a[i] <= 57)
        {

        }
        else
        {
            spcl++;
        }
    }
    b[k] = '\0';
    printf("Total Special Characters: %d\n", spcl);
    printf("Modified String: %s", b);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100], b[100];
    int i, j, k = 0, flag = 0, flag1 = 0, l;
    printf("Enter String: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        for(j = 0; a[j] != '\0'; j++)
        {
            if(a[i] != b[j])
            {
                if(b[i] == '\0')
                {
                    b[i] = a[i];
                }
            }
        }
    }
    //b[k] = '\0';
    printf("Modified String: %s", b);
    return 0;
}

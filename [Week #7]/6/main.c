#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i, k = 0, flag = 0, astr;
    printf("Enter String: ");
    gets(a);
    astr = checkDigit(a);
    for(i = astr-1; i >= 0; i--)
    {
        b[k] = a[i];
        k++;
    }
    b[k] = '\0';
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == b[i])
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\n %s is Palindrome!\n", a);
    }
    else
    {
        printf("\n %s is not Palindrome!\n", a);
    }
}

int checkDigit(char a[100])
{
    int digit = 0, i;
    for(i = 0; a[i] != '\0'; i++)
    {
        digit++;
    }
    return digit;
}

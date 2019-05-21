#include <stdio.h>
int checksize(char a[20]);
int checkLetter(char a[20]);

int main()
{
    char a[20];
    int i, asize, aletter;
    printf("Enter New Password: ");
    gets(a);
    asize = checksize(a);
    aletter = checkLetter(a);
    if(asize >= 8 && aletter == 2)
    {
        printf("The Password is Strong!");
    }
    else
    {
        printf("The Password is Weak!");
    }
}

int checksize(char a[20])
{
    int digit = 0, i;
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == ' ')
        {
            digit = 0;
            break;
        }
        else
        {
            digit++;
        }
    }
        return digit;
}

int checkLetter(char a[20])
{
    int upper = 0, lower = 0, i, s;
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 65 && a[i] <= 90)
        {
            upper = 1;
        }
        else if(a[i] >= 97 && a[i] <= 122)
        {
            lower = 1;
        }
    }
    s = upper + lower;
    return s;
}

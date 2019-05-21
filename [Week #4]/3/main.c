#include <stdio.h>
#include <stdlib.h>
int leap(int y);

int main()
{
    int a, b;
    printf("Enter Year: ");
    scanf("%d", &a);
    b  = leap(a);
    if(b == 0)
    {
        printf("%d is Leap Year!", a);
    }
    else
    {
        printf("%d is Not Leap Year!", a);
    }
    return 0;
}
int leap(int y)
{
    int a;
    if(y%4 == 0 && y%100 != 0 && y%400)
    {
        a = 0;
    }
    else
    {
        a = 1;
    }
    return a;
}

#include <stdio.h>

int main()
{
    int i, a[10], b, flag = 0, c = 0;
    for(i=0; i < 10; i++)
    {
        printf("%dth Number: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Number to search inside Array: ");
    scanf("%d", &b);
    for(i=0; i < 10; i++)
    {
        if(b == a[i])
        {
            flag = 1;
            c++;
        }
    }
    if(flag == 1)
    {
        printf("%d is present %d times inside Array!", b, c);
    }
    else
    {
        printf("%d is not present inside Array!", b);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i;
    for(i = 0; i < 10; i++)
    {
        printf("Enter %dth Number: ", i + 1);
        scanf("%d", &a[i]);
    }
    checkDuck(a);
    return 0;
}

void checkDuck(int a[10])
{
    int i, b, flag = 0, c;
    printf("\n-------------------------------\n");
    for(i = 0; i < 10; i++)
    {
        c = a[i];
        while(a[i] > 0)
        {
            if(b == 0)
            {
                flag = 1;
            }
            b = a[i] % 10;
            a[i] = a[i] / 10;
        }
        if(c == 0)
        {
            printf("%d cannot be calculated!\n", c);
        }
        else if(flag == 0)
        {
            printf("%d is not a Duck Number!\n", c);
        }
        else if(flag == 1)
        {
            printf("%d is Duck Number!\n", c);
        }
        flag = 0;
    }
    printf("-------------------------------\n");
}

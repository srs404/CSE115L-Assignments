#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, x3, y1, y2, y3, sum1, sum2;
    printf("Enter First Point\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter Second Point\n");
    scanf("%d %d", &x2, &y2);
    printf("Enter Third Point\n");
    scanf("%d %d", &x3, &y3);
    sum1 = (float)(y2 - y1)/(x2 - x1);
    sum2 = (float)(y3 - y1)/(x3 - x1);
    if(sum1 == sum2)
    {
        printf("The Three Points (%d, %d), (%d, %d) and (%d, %d) Are On The Same Line.", x1, y1, x2, y2, x3,y3);
    }
    else
    {
        printf("The Three Points (%d, %d), (%d, %d) and (%d, %d) Are Not On The Same Line.", x1, y1, x2, y2, x3,y3);
    }
    return 0;
}

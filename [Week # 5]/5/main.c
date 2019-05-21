#include <stdio.h>

int main()
{
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, n, i, sum = 0;
    printf("Enter month number: ");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of January is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    case 2:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of February is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    case 3:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of March is: %d. It is the %dth day of the year", a[n-1], sum);
        break;

    case 4:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of April is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    case 5:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of May is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    case 6:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of June is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    case 7:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of July is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    case 8:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of August is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    case 9:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of September is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    case 10:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of October is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    case 11:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of November is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    case 12:
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("Last Day of December is: %d. It is the %dth day of the year", a[n-1], sum);
        break;
    default:
        printf("Enter a Valid Month Number!");
    }
    return 0;
}

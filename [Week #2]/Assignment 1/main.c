#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cost, sell, result;
    printf("Enter the Selling Price of that product: ");
    scanf("%d", &sell);
    printf("Enter the Cost of product: ");
    scanf("%d", &cost);
    if (sell < cost)
    {
        result = cost - sell;
        printf("The seller incurred loss of %d BDT", result);
    }
    else
    {
        result = sell - cost;
        printf("The seller made profit of %d BDT", result);
    }
    return 0;
}

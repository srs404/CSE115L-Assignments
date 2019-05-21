#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sell, prof; //sell is Selling price And prof is Profit Earned Cost is Costing price
    printf("Total Selling Price of 15 Items : ");
    scanf("%d", &sell);
    printf("\nTotal Profit Earned : ");
    scanf("%d", &prof);
    sell /= 15;
    prof /= 15;
    sell -= prof;
    printf("\nCost of Each Product is : %d\n", sell);
    return 0;
}

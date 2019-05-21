#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ram, shyam, ajay;
    printf("Enter Ram's Age: ");
    scanf("%d", &ram);
    printf("Enter Shyam's Age: ");
    scanf("%d", &shyam);
    printf("Enter Ajay's Age: ");
    scanf("%d", &ajay);
    if(ram < shyam && ram < ajay)
    {
        printf("Ram is the Youngest");
    }
    else if(shyam < ram && shyam < ajay)
    {
        printf("Shyam is the Youngest");
    }
    else
    {
        printf("Ajay is the Youngest");
    }
    return 0;
}

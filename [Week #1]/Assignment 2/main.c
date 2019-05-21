#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inptemp, centgrde;
    printf("Enter Temperature in Fahrenheit Degree: ");
    scanf("%f", &inptemp);
    centgrde = (float)(inptemp - 32)/1.8;
    printf("\nYour Temperature in Centigrade Degree is : %f", centgrde);
    return 0;
}

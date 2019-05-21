#include <stdio.h>

int main()
{
    float kmdistant;
    printf("Enter The Distance between two Cities in KM: ");
    scanf("%f", &kmdistant);
    printf("\nYour Distance in Meters is      : %0.2f\n", kmdistant * 1000);
    printf("Your Distance in Feet is        : %0.2f\n", kmdistant * 3280.84);
    printf("Your Distance in Inches is      : %0.2f\n", kmdistant * 39370.08);
    printf("Your Distance in Centimeters is : %0.2f\n", kmdistant * 100000);
    return 0;
}

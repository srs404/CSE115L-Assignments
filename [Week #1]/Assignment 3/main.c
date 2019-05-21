#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float reclength, recbreadth, recarea, recperimtr, //Rectangle Variables
    cirradius, pi = 3.1416, cirarea, circmfer; //Circle Variables
    printf("    Input The Radius of your Circle : ");
    scanf("%f", &cirradius);
    printf(" Input the Length of your Rectangle : ");
    scanf("%f", &reclength);
    printf("Input the Breadth of your Rectangle : ");
    scanf("%f", &recbreadth);
    //Rectangle Area & Perimeter
    recarea = (float)(reclength*recbreadth);
    recperimtr = (float)(2*(reclength+recbreadth));
    //Circle Area & Circumference
    cirarea = (float)(pi * pow(cirradius, 2));
    circmfer = (float)((cirradius * 2) * pi);
    printf("\n      The Area of Your Rectangle is : %f\n", recarea);
    printf("\n The Perimeter of Your Rectangle is : %f\n", recperimtr);
    printf("\n         The Area of Your Circle is : %f\n", cirarea);
    printf("\nThe Circumference of Your Circle is : %f\n", circmfer);
    return 0;
}

#include <stdio.h>
int sum(int b1, int b2, int b3, int b4, int b5);
int average(int c);

int main()
{
    int a1, a2, a3, a4, a5, s, avg, i;
    printf("Enter 5 Numbers\n");
    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);
    s = sum(a1, a2, a3, a4, a5);
    avg = average(s);
    printf("Sum of those Numbers: %d\n", s);
    printf("Average of Those Numbers: %d", avg);
}
int sum(int b1, int b2, int b3, int b4, int b5)
{
    return b1 + b2 + b3 + b4 + b5;
}
int average(c)
{
    return c/5;
}

#include <stdio.h>
int sum(int n[5]);
int average(int v[5]);

int main()
{
    int a[5], s, avg, i;
    for(i=0; i<5; i++)
    {
        printf("Enter %dth Number: ", i+1);
        scanf("%d", &a[i]);
    }
    s = sum(a);
    avg = average(a);
    printf("Sum of those Numbers: %d\n", s);
    printf("Average of Those Numbers: %d", avg);
}
int sum(int n[5])
{
    int a, s = 0;
    for(a = 0; a < 5; a++)
    {
        s = s + n[a];
    }
    return s;
}
int average(int v[5])
{
    int i, s = 0;
    for(i = 0; i < 5; i++)
    {
        s = s + v[i];
    }
    s = s/5;
    return s;
}

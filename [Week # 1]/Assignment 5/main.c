#include <stdio.h>

int main()
{
   int totsum = 0, prev, chckdigit, inpnum;
   printf("Enter an integer\n");
   scanf("%d", &inpnum);
   chckdigit = inpnum;
   while (chckdigit != 0)
   {
      prev = chckdigit % 10;
      totsum = totsum + prev;
      chckdigit = chckdigit / 10;
   }
   printf("Sum of the digits of your Number %d => %d\n", inpnum, totsum);
   return 0;
}

#include <stdio.h>

int main()
{
   int n;

   printf("Enter an integer: \n");
   scanf("%d", &n);

   if (n%2 == 0)
      printf(" it's Even\n");
   else
      printf(" it's Odd\n");

   return 0;
}

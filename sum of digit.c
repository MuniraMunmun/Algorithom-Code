#include<stdio.h>
int main()
{
    int m,n,sum =0;
     printf("\n Enter any digit: ");
     scanf("%d",&n);

    while(n >0)
    {
        m = n%10;
        sum = sum+m;
        n = n/10;
    }
   printf("\n  sum of digits of given number is = %d\n",sum);

   return 0;

}

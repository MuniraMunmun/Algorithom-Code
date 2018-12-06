#include<stdio.h>
int main()
{
    int num, reminder, count=0;
    printf("\t Enter any number: ");
    scanf("%d",& num);

    while(num >0)
    {
        num = num/10;
        count = count+1;
    }
    printf("\n  Number of digits of given number is = %d\n",count);

    return 0;
}

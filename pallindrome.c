#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[50];
    printf("  Enter any string: ");
    gets(a);

    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b) ==0)
    {
        printf("\nit's pallindrome! \n");
    }
    else
        printf("  not pallindrome...\n");

    return 0;
}

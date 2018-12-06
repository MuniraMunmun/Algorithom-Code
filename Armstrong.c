#include<stdio.h>
 int main()
{
  int n,r,sum=0,arms;
  printf("enter the number= ");
  scanf("%d",&n);
  arms=n;
while(n>0)
{
  r=n%10;
  sum=sum+(r*r*r);
  n=n/10;
}
 if(arms == sum)
  printf("\narmstrong  number ");
 else
  printf("not armstrong number");

 return 0;
}

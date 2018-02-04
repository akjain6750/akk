#include<stdio.h>
void main()
{
  int i,j,fact=0;
  scanf("%d",&i);
  for(j=1;j<=i;j++)
    fact*=j;
  printf("%d",fact);  
}

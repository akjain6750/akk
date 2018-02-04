#include<stdio.h>
void main()
{
 int i,j,c=1,rev=0;
 scanf("%d",&i);
 while(i>0)
 {
   j=i%10;
   rev=rev*10+j;
   i=i/10;
 }
 printf("%d",rev);
}

#include<stdio.h>
void main()
{
  char s[100];
  gets(s);
  s[s.length+1]=".";
  printf("%s",s);
}

#include<stdio.h>
#include"func.h"

int main()
{
  int c;
  int m;
  printf("Choose n, the size of the set \n"); fflush(stdout);
  scanf("%d",&c);
  printf("Choose k, how many from the set to pick \n"); fflush(stdout);
  scanf("%d",&m);
  int x = binom(c,m);
  printf("%d choose %d is %d",c, m, binom(c,m)); fflush(stdout);

}

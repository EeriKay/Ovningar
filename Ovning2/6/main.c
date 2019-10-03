#include<stdio.h>
#include"kvad.h"
#include"kub.h"

int main()
{
  int input=0;
  int i;
  printf("För hur många nummer vill du generera tabellen?"); fflush(stdout); scanf("%d", &input);
  printf("i    i*i  i*i*i \n"); fflush(stdout);
  printf("=    ===  ===== \n"); fflush(stdout);

  for (i=1;i<=input;i++)
  {
  printf("%d %6d %6d \n", i, kvad(i), kub(i)); fflush(stdout);
  }
}

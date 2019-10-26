#include"func.h"
#include"las.h"
#include<stdio.h>
#define MAX 500
int main()
{
  char input[500];
  las(input);
  skriv(input);
  reverse_order(input);
  skriv(input);

  return 0;
}

#include<stdio.h>
#include"las.h"
int main(){
  int i=0;
  char input[1020];
  i=las(input);
  skriv(input);
  putchar('\n');
  printf("%d",i);
  return 0;
}

#include"las.h"
#include<stdio.h>
#include<string.h>
int main(){
  char input[1020];
  las(input);
  int i=0;
  char c;
  while ((c=input[i])!='\0') {
  printf("\n");
    while (((c=input[i])!='\0')&&(c!='\n')&&(c!=' '))
    {
      putchar(c);
      i++;
    }

    i++;
  }
  return 0;
}

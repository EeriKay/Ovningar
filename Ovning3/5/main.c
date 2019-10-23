#include<stdio.h>

int main(){
  char c='\x41';
  putchar(c);
  while (c++!='\xFF')
  {
    putchar(c); fflush(stdout);
  }
  return 0;
}

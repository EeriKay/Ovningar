#include"las.h"
#include<stdio.h>
void las(char rad[])
{
  char c;
  int i=0;
  while((c=getchar())!='\n')
  {
    rad[i] = c;
    i++;
  }
  rad[i]='\0';
}
void skriv(char rad[])
{
  int i=0;
  while(getchar()!='\0')
  {
    putchar(rad[i]);
    i++;
  }
  putchar('\n');
}

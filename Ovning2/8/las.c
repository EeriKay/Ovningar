#include<stdio.h>
#include"las.h"

void las(char input[])
{
  char c;
  int i;
  while((c=getchar())!=EOF)
  {
    input[i]=c;
    i++;
  }
  input[i]='\0';
}
void skriv(char input[])
{
  char c;
  int i=0;
  while((c=input[i])!='\0')
  {
    putchar(c);
    i++;
  }
}
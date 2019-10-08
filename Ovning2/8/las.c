#include<stdio.h>
#include"las.h"

int las(char input[])
{
  char c;
  int i=0;
  int j=0;
  while((c=getchar())!=EOF)
  {
    input[i]=c;
    i++;
    if (c=='\n')
    {
      j++;
    }
  }
  input[i]='\0';
  putchar('\n');
  return j;
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

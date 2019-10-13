#include<stdio.h>
#include"las.h"
void las(char input[])
{
    char c;
    int i=0;
    while ((c=getchar())!=EOF)
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
  while ((c=input[i])!='\0')
  {
    putchar(c);
    i++;
  }
}
void understryck(char input[])
{
  int i=0;
  char c;
  while ((c=getchar())!='\0')
  {
    input[i]='\b';
    input[i]='_';
    i++;
  }
}

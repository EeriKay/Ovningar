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
void understryk(char input[])
{
  int i=0;
  char c;
  while ((c=input[i])!='\0')
  {
	putchar('\b');
    input[i]='_';
    i++;
  }
}
	
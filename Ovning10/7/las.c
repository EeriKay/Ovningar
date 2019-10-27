#include"las.h"
#include<stdio.h>
#include<stdlib.h>
struct indata *newdata(void)
{
  struct indata *new;
  char c;
  c = getchar();
  if (c!='\n')
  {
  new=createchar();
  new->t = c;
  new->rest = newdata();
  }
  else
  {
      return NULL;
  }
}

struct indata *createchar(void)
{
  struct indata *tp;
  tp = (struct indata *) calloc(1, sizeof(struct indata));
  if (tp == NULL)
  {
    printf("FEL");
  }
  else{
    return tp;
  }
}

struct indata *write(struct indata *tp)
{
 while (tp!=NULL)
 {
   putchar(tp->t);
   tp=tp->rest;
 }
}

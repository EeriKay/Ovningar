#include"func.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

void newparents(struct person *p)
{
  struct person *vp;
  struct person *hp;
  vp = (struct person *) calloc(1, sizeof (struct person));
  hp = (struct person *) calloc(1, sizeof(struct person));
  if (vp==NULL || hp ==NULL)
  {
    printf("ERROR");
  }
  else
  {
    p->h=hp;
    p->v=vp;
  }
}

void createfamilytree(struct person *p)
{
  int i;
  newparents(p);
  printf("Name %ss left parent!\n", p->name); fflush(stdout);
  scanf("%s", (p->v)->name);
  printf("Name %ss right parent!\n", p->name); fflush(stdout);
  scanf("%s", (p->h)->name);
  printf("Do you want to add parents to %s?, if yes type 1\n", (p->h)->name); fflush(stdout);
  scanf("%d", &i);
  if (i==1)
  {createfamilytree(p->h);} /*New parents */
  else
  {
  (p->h)->h=NULL; /*Set parents to NULL pointer.  */
  (p->h)->v=NULL;
  }
  printf("Do you want to add parents to %s?, if yes type 1\n", (p->v)->name); fflush(stdout);
  scanf("%d",&i);
  if (i==1)
  {createfamilytree(p->v);} /*New parents */
  else
  {
  (p->v)->h=NULL; /*Set parents to NULL pointer.  */
  (p->v)->v=NULL;
  }
}

void skrivalla(struct person *p) 
{
 if ((p->v)==NULL&&(p->h)==NULL) /*In the current form of the program each person will have two parents, but I'll write it as this for future alterations */
 {
   printf("%s doesn't have parents yet!\n", p->name); fflush(stdout);
 }
 else
 {
   printf("%ss one parent is %s\n", p->name, (p->v)->name); fflush(stdout);
   printf("%ss other parent is %s\n", p->name, (p->h)->name); fflush(stdout);
   skrivalla(p->v);
   skrivalla(p->h);
 }
}

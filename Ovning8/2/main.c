#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"func.h"
int main(){
  struct person
  p1 = {"", NULL, NULL };
  printf("Write your name: \n"); fflush(stdout);
  scanf("%s", p1.name);
  printf("Hello %s, do you want to add your parents? Type 1 for yes \n", p1.name); fflush(stdout);
  int i;
  scanf("%d",&i);
  if (i==1){
  createfamilytree(&p1);}
  else{
  printf("Bye!");}
  skrivalla(&p1);

  return 0;
}

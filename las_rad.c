/*Läser en hel rad */
/*Vi passar in en matris eller vafan som blir en pointer, rad[] är samma sak som &rad[0] */
#include"las_rad.h"
#include<stdio.h>
void las_rad(char rad[]){
  int i;
  char c;
  i=0;
  while ((c=getchar())!= '\n')
  {
    rad[i]=c;
    i++;
  }
  rad[i]='\0';
}
void skriv_rad(char rad[]){
  int i = 0;
  while (rad[i]!= '\0'){
    putchar(rad[i]);
    i++;
  }
  putchar('\n');
}

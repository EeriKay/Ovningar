/*Läser en hel rad */
/*Vi passar in en matris eller vafan som blir en pointer, rad[] är samma sak som &rad[0] */
#include"las_rad.h"
#include<stdio.h>
void las_rad(char rad[]){
  char c;
  char i;
  i=0;
  while ((c=getchar())!='\n' )
  {
    rad[i] = c;
    i++;
  }
  rad[i]='\0';
}

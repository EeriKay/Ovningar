#include<stdio.h>
#include"las_rad.h"
/*Den här approachen fungerar inte för att vi vill kunna lägga till en address med gatunummer. Till exempel Vikingavägen 13 */
 int main(){
  char namn[20];
  char address[30];
  char post[20];
  printf("Vad heter du? \n" ); fflush(stdout);  /*fflush behövs för att annars buffras det istället! */
  las_rad(namn);  /*19%s för att namnet får vara max 19 långt */
  printf("Vad är din address? \n"); fflush(stdout);
  las_rad(address);
  printf("Vad är din postkod \n"); fflush(stdout);
  las_rad(post);
  skriv_rad(namn);
  skriv_rad(address);
  skriv_rad(post);
  return 0;
}

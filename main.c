#include<stdio.h>
/*Den här approachen fungerar inte för att vi vill kunna lägga till en address med gatunummer. Till exempel Vikingavägen 13 */
 int main(){
  char namn[20];
  char address[30];
  char post[5];
  printf("Vad heter du? \n" );  /*fflush behövs för att annars buffras det istället! */
  scanf("19%s \n",namn );  /*19%s för att namnet får vara max 19 långt */
  printf("Vad är din address? \n");
  scanf("29%s \n", address);
  printf("Vad är din postkod %s \n");
  scanf("4%s \n", post);
  printf("%s \n %s \n %s \n",namn, address,post);
  return 0;
}

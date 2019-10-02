#include<stdio.h>
/*Den här approachen fungerar inte för att vi vill kunna lägga till en address med gatunummer. Till exempel Vikingavägen 13 */
 int main(){
  char namn[20];
  printf("Vad heter du?\n" ); fflush(stdout); /*fflush behövs för att annars buffras det istället! */
  scanf("19%s",namn ); /*19%s för att namnet får vara max 19 långt */
  printf("Hej! %s\n", namn);
  return 0;
}

#include<stdio.h>
#include"las.h"
#include<utility.h>

int main(){
  char input[1080];
  las(input);
  skriv(input);
   skriv(input);
  understryk(input);  
  skriv(input);
  while(!KeyHit());
  return 0;
}

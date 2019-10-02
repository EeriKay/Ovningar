#include<stdio.h>

int main() {
  char namn[20], c; /*Namn kommer innehålla namnet som vi passar in. c är en variabel för inläsning */
  int i;
  printf("Vad heter du?\n"); fflush(stdout);
  las_rad(namn);
  printf("Hej %s\n", namn);
  return 0;
}

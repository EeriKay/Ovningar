#include<stdio.h>
int main(){
  float Dagens=0;
  float Gammal=0;
  float Liter=0;
  printf("Dagens mätarställning \n" ); fflush(stdout);
  scanf("%f", &Dagens);
  printf("mätarställning för ett år sedan \n"); fflush(stdout);
  scanf("%f", &Gammal);
  printf("Hur många liter har förbrukats? \n" ); fflush(stdout);
  scanf("%f", &Liter);
  printf("Årsförbrukning är: %.2f", (Dagens-Gammal)/Liter);
}

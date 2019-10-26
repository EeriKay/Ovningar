#include<stdio.h>

int main(){
  int ar;
  printf("Ange år: \n");
  scanf("%d", &ar);
  if (((ar%4==0)&&(ar%100!=0))||(ar%400==0)) {
    printf("%d är ett skottår", ar);
  }
  else
  {
    printf("%d är inte ett skottår", ar);
  }
}

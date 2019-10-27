#define ABS(i) ((i)>0?(i):(-i))
#include <stdio.h>
int main(){
  printf("Give a number to return an absolute value for: \n"); fflush(stdout);
  float i;
  scanf("%f",&i);
  printf("The absoluve value of %.3f is %.3f", i, ABS(i));
  return 0;
}

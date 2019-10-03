#include<stdio.h>
#define RABATT 0.1
#define GRANS 1000
int main(){
    float pris;
    float antal;
    float i;
    printf("Hur mycket kostar varan?\n"); fflush(stdout);
    scanf("%f", &pris);
    printf("Hur många av varan köper du?\n"); fflush(stdout);
    scanf("%f", &antal);
    i = pris*antal;
    if (i >GRANS)
    {
      printf("Kostnad: %.2f\n",i*(1-RABATT) );
    }
    else
    {
      printf("Kostnad: %.2f\n", i);
    }
    return 0;
}

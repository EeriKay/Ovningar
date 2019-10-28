#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
  int i;
  long int j=0;
  long int max=0;
  for (i=1; i<argc; i++){
    printf("Argument %d: %s \n",i, argv[i]);
    j=atol(argv[i]);
    printf("Tal %d: %d \n", i,j);
    max=(max>j)?max:j;
    }
    printf("Max är: %d", max);

  return 0;
}

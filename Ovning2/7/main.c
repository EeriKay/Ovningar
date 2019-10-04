#include"las.h"
#include<stdio.h>
#include<string.h>
int main(){
  char input[1020];
  scanf("%1019s", input);
  char holder[1020];
  char clean[1020];
  /* printf("%s", input); fflush(stdout); */
  int i = 0;
  int j = 0;
  while(input[i] != '\n')
  {
    printf("%d\n", i); fflush(stdout);
    if(input[i]!='\0')
    {
      holder[j] = input[i];
      j++;
    }
    else
    {
      printf("Inner loop"); fflush(stdout);
      printf("%s\n", holder); fflush(stdout);
      j=0;
      memset(&holder[0],0, sizeof(holder));
    }
    i++;
    if (input[i]== '\0')
    {
      printf("True"); fflush(stdout);
    }
  }


  return 0;
}

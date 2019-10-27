#include<stdio.h>
int main()
{
  printf("%d\n", __LINE__); fflush(stdout);
  printf("%s\n", __FILE__); fflush(stdout);
  printf("%s\n", __DATE__); fflush(stdout);
  printf("%s\n", __TIME__); fflush(stdout);
  #ifdef __STDC__
  printf("STDC defined \n");
  printf("STDC VALUE: %d\n",__STDC__);
  #else
  printf("STDC Not defined \n")
  #endif

  #if __STDC_VERSION__ >=199901L
  printf("C99 \n");
  #else
  printf("STDC_VERSION Not C99 \n");
  #endif

  return 0;
}

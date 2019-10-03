#include<stdio.h>

int main()
{
  float dagslon= 0.01;
  float totallon=0;
  int dag = 0;
  while(totallon<1000000)
  {
    totallon=totallon+dagslon;
    dagslon=2*dagslon;
    dag++;
  }
  printf("%d \n", dag); fflush(stdout);
  return 0;
}

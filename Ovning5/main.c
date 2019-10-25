#include<stdio.h>
double eq(float x)
{
  return (3*x*x*x-5*x*x+2*x-20);
}

int main()
{
  printf("Uppgift a: \n");
  for(int i=-10;i<=10;i++)
  {
    printf("%d: %.3f \n", i, eq(i));
  }
  printf("Uppgift b: \n");
  for(float i=-2; i<=2.01; i+=0.1)
  {
    printf("%.2f: %.3f \n", i, eq(i));
  }
}

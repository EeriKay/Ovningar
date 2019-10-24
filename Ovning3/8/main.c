#include<stdio.h>

void skriv(char str[], char inp[])
{
  int i = 0;
  while (inp[i]!='\0')
  {
    str[i]=inp[i];
    i++;
  }
  str[i]='\0';
}

int main()
{
  float temp=0;
  float max_temp;
  float sum_temp=0;
  char string1[6];
  enum veckodag {mandag=1, tisdag, onsdag, torsdag, fredag, lordag, sondag} dag=mandag;
  while(dag <= sondag)
  {
    switch (dag){
      case mandag:
        skriv(string1, "Måndag\0");
        break;
      case tisdag:
        skriv(string1, "Tisdag\0");
        break;
      case onsdag:
        skriv(string1, "Onsdag\0");
        break;
      case torsdag:
        skriv(string1, "Torsdag\0");
        break;
      case fredag:
        skriv(string1, "Fredag\0");
        break;
      case lordag:
        skriv(string1, "Lördag\0");
        break;
      case sondag:
        skriv(string1, "Söndag\0");
        break;
    }

    printf("Skriv in %sens temperatur: \n", string1); fflush(stdout);
    scanf("%f",&temp);
    sum_temp=sum_temp+temp;
    if (dag==1||(temp>max_temp))
    {
      max_temp=temp;
    }
    dag++;
  }
  printf("Max tempteratur: %.3f \n", max_temp); fflush(stdout);
  printf("Medeltemperatur: %.3f \n", sum_temp/7); fflush(stdout);
  return 0;
}

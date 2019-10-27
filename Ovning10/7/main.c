#include<stdio.h>
#include"las.h"
#include<string.h>
#include<ctype.h>
#define MAX 500
int main(){
  struct indata *input;
  printf("Skriv in ditt sak \n"); fflush(stdout);
  input = newdata();
  char str[500];
  char c;
  for(struct indata *counter = input; counter!=NULL;)
  {
  if (counter->t==' ')
  {
  strcat(str, "-");
  }
  else if (isalpha(counter->t))
  {
  c=tolower(counter->t);
  while(((counter!=NULL)&&!((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='y')))&&isalpha(counter->t))
  {
    strcat(str, "-");
    strcat(str, &(counter->t));
    counter=counter->rest;
    if (counter!=NULL)
    {
      c=tolower(counter->t);
    }
    else
    {
      c='-';
      break;
    }

  }
  if (isalpha(c))
  {
    strcat(str,&(counter->t));
  }
  }
  else if ((counter!=NULL)&&isdigit(counter->t))
  {
    strcat(str, "-");
    strcat(str, &(counter->t));
    strcat(str,"-");
  }
  else
  {
    strcat(str,"-");
  }
  if (counter!=NULL)
  {counter=counter->rest;}
  else
  break;
  }
char *p=str;
while((p=strstr(p, "--"))!=NULL)
{
  strncpy(p, "",4);
}
printf("%s",str); fflush(stdout);

}

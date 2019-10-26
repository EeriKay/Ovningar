#include"func.h"
void reverse_order(char *point)
{
  char *check_p=point;
  char placeholder;
  char *place_p=point;
  while((*check_p!='\0')&&(check_p<&point[MAX]))
  {
    check_p++;
  }
  check_p--;
  check_p--;
  while(place_p<check_p)
  {
    placeholder=*place_p;
    *place_p++=*check_p;
    *check_p--=placeholder;
  }

}

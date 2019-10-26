#include"func.h"

int fak(int n)
{
  if(n>1)
  {
    return n*(fak(n-1));
  }
  else
  {
    return 1;
  }
}

int fak_count(int n, int m) /*m räknar hur många gånger vi ska gå in i rekursionen */
{
  if(m>1)
  {
    return n*(fak_count((n-1),(m-1)));
  }
  else
  {
    return n;
  }
}
int binom(int n, int k) /*binom ger alltid heltal enl mat. bevis */
{
  return fak_count(n,k)/(fak(k));
}

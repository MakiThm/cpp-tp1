#include <stdlib.h>

int main()
{
  int *p = NULL;
  int *q;
  int *tab = new int[3];
  int i;
  for (i = 0; i < 5; i++)
    tab[i] = i;
  i = *q;
  i = tab[i];
  *p = 0;
  return 0;
}

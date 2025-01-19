//9. Draw this pattern for n=5

#include <stdio.h>

int main()
{
  int i, j, sp, sp2, n = 5, stars = n;

  for (i = 1; i <= 2 * n - 1; i++)
  {

    for (sp = 0; sp < 2*(n-stars); sp++)
    {
      printf(" ");
    }
    for (j = 1; j <= stars; j++)
    {
      printf("*");
    }
    for (sp2 = 0; sp2 < 2 * stars - 1; sp2++)
    {
      printf(" ");
    }
    for (j = 1; j <= stars; j++)
    {
      printf("*");
    }

    if (i <= n-1)
    {
      stars--;
    }
    else
    {
      stars++;
    }

    printf("\n");
  }
}
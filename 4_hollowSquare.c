// 4. Hollow square pattern for n=5

#include <stdio.h>

int main()
{
  int i, j, n = 5;

  for (i = 1; i <= n; i++)
  {

    for (j = 1; j <= n; j++)
    {
      if (i == 1 || i == n || j == 1 || j == n)
      {

        printf("%d ",j);
      }
      else
      {
        printf("  ");
      }
    }

    printf("\n");
  }
}
//6. Pascal's triangle for n = 5

#include <stdio.h>
int main()
{

  int i,j,space,n = 5;

  for (i = 0; i < n; i++)
  {

    for (space = 0; space < n - i; space++){
      printf(" ");
    }
    int val = 1;
    for (j = 0; j <= i; j++)
    {
      printf("%d ", val);

      val = val * (i - j) / (j + 1);
    }
    printf("\n");
  }

  return 0;
}
//1. BUTTERFLY PATTERN FOR N=5 

#include <stdio.h>

int main()
{
  int n = 5;

  int space = 2*n-1;
  int star = 0;

  for (int i = 1; i <=2*n-1; i++)
  {
    if (i<=n)
    {
        space -= 2;
        star++;
    }
    else{
        space +=2;
        star--;
    }
    for(int j = 1; j<=star;j++){
        printf("*");
    }
    for (int j = 1; j<=space;j++)
    {
        printf(" ");
    }
    for (int j = 1; j <=star ; j++)
    {
        if (j!=n)
        {
            printf("*");
        }
        
    }

    printf("\n");
    
  }
  return 0;
}
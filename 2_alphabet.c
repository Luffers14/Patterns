//2. Alphabet pattern for n=5

#include <stdio.h>

int main()
{
  int n = 5;

  int space = 2*n;
  int letter = 0;

  for (int i = 1; i <=n; i++)
  {
    space-=2;
    letter++;
    int k = letter;
    for(int j = 1; j<=letter;j++){
        printf("%c",'A'-1+j);
    }
    for (int j = 1; j<=space;j++)
    {
        printf(" ");
    }
    for (int j = 1; j <=letter ; j++)
    { 
      
      printf("%c",'A'+k-1);
      k--;  
    }

    printf("\n");
    
  }
  return 0;
}
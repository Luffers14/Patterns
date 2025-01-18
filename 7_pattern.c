//7. Draw this pattern for n=3

#include<stdio.h>

int main(){
  int i,j,k,space,n=3;

  for (i = 0; i < n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      for (space = 0; space < n*i; space++)
      {
        printf(" ");
      }
      
      for (k = 1; k <= j; k++)
      {
        printf("*");
      }
      
      printf("\n");
    }
    
  }
  
}
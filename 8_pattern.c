//8. Draw this pattern for n=5

#include<stdio.h>
#include<stdlib.h>

int min(int a , int b){
  int m;
  a>b? (m=b):(m=a);
  return m;
}

int main(){
  int i,j,k,left,right,up,down,n=5;

  for (i = 1; i <= 2*n-1; i++)
  {
    for (j = 1; j <= 2*n-1; j++)
    {
      left = j;
      right = 2*n-j;
      up = i;
      down = 2*n-i;

      k = min(min(left,right) , min(up,down));

      printf("%d ",n-k+1);
      
    }
    printf("\n");
  }
  
}
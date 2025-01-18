//5. Hollow Hourglass pattern for n=5

#include<stdio.h>

int main(){
  int i,j,n=5,letter=2*n-1,space;

  for ( i = 1; i <=2*n-1; i++)
  {

    for ( space = 1; space<=n-letter/2; space++)
    {
      printf("   ");
    }
    
    for ( j = 1; j <=letter; j++)
    {
      if (i==1||i==2*n-1||j==1||j==letter)
      {
        printf(" %c ",'A'-1+j);
      }
      else{
        printf("   ");
      }
      
    }
    for ( space = 1; space<=n-letter/2; space++)
    {
      printf("   ");
    }
    
    if (i<=n-1)
    {
      letter-=2;
      
    }
    else{
      letter+=2;
    }
    printf("\n");
  }
  
}
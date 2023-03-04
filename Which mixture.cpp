#include <stdio.h>

int main(void) {
  int t,A=0,B=0;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d %d",&A,&B);
      if(A>0&&B>0)
      {
          printf("Solution");
          printf("\n");
      }
      if(B==0)
      {
          printf("Solid");
          printf("\n");
      }
      if(A==0)
      {
          printf("Liquid");
          printf("\n");
      }
  }
}

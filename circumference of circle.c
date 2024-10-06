#include<stdio.h>
int main()
{
  int A;
  float cir;
  scanf("%d",&A);
  if(A<=0)
  {
  printf("error");
  }
  else {
  cir=2*3.14*A;
  printf("circumference= %.2f",cir);
  }
  return 0;
}

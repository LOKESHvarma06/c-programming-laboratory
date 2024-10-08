#include <stdio.h>
int main()
{
   int N,i,sum=0,product=1,average;
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
       sum=sum+i;
       product=product*i;
       average=sum/N;
      printf("%d ",i);
   }
    printf("\nsum=%d\nproduct=%d\naverage=%d",sum,product,average);
    return 0;
}

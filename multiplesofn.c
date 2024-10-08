#include <stdio.h>
int main()
{
   int N,i;
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
       printf("%dx%d=%d\n",N,i,i*N);
   }
    return 0;
}

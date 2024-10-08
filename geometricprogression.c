#include<stdio.h>
#include<math.h>
int main()
{
    int AN,a,r,n;
    scanf("%d %d %d",&n,&a,&r);
    AN=a*pow(r,n-1);
    printf("%dth term of series is %d",n,AN);
    return 0;
}

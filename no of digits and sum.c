#include<stdio.h>
int main()
{
    int n,rem,sum=0,count;
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("no of digits= %d\nsum= %d",count,sum);
    return 0;
}

#include <stdio.h>

int main()
{
    float p,t,r,si;
    printf("principal= ");
    scanf("%f",&p);
    printf("time= ");
    scanf("%f",&t);
    printf("rate= ");
    scanf("%f",&r);
    
    si=p*t*r/100.0;
     printf("the simple interest is %.2f",si);
    

    return 0;
}

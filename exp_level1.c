#include<stdio.h>
#include<math.h>
int main()
{
    float t,p,r,amt,ci;
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&t);
    amt=p*pow((1+r/100),t);
    ci=amt-p;
    printf("the compound interest is %.2f",ci);
    return 0;
}

#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,opt,sum,subt,prod,division,mod,avg,power;
    printf("1-addition\n2-subtraction\n3-multiplication\n4-division\n5-modulus\n6-average\n7-power\n");
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    printf("enter option:");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
    sum=a+b;
    printf("addition=%d",sum);
    break;
    case 2:
    subt=a-b;
    printf("subtraction=%d",subt);
    break;
    case 3:
    prod=a*b;
    printf("multiplication=%d",prod);
    break;
    case 4:
    division=a/b;
    printf("division=%d",division);
    break;
    case 5:
    mod=a%b;
    printf("modulus=%d",mod);
    break;
    case 6:
    avg=a+b/2;
    printf("average=%d",avg);
    break;
    case 7:
    power=pow(a,b);
    printf("power=%d",power);
    }
    return 0;
}

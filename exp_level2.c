#include<stdio.h> 
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    float AB,BC,AC;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    scanf("%d%d",&x3,&y3);
     
    AB=pow((x2-x1),2)+pow((y2-y1),2);
    printf("length AB :%.2f\n",AB);
    BC=pow((x3-x2),2)+pow((y3-y2),2);
    printf("length BC :%.2f\n",BC);
    AC=pow((x1-x3),2)+pow((y1-y3),2);
    printf("length AC :%.2f\n",AC);
    return 0;
}

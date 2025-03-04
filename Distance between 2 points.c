#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2,a,b,c,d,e;
    printf("Enter the first point (x1 y1): ");
    scanf("%f %f",&x1,&y1);
    printf("Enter the second point (x2 y2): ");
    scanf("%f %f",&x2,&y2);
    a=x2-x1;
    b=y2-y1;
    c=pow(a,2);
    d=pow(b,2);
    e=sqrt(c+d);
    printf("The Distance between you two given points are: %f",e);
    return 0;
}
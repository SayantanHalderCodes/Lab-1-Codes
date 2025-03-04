#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, m, c;
    printf("Enter the first point (x1 y1): ");
    scanf("%f %f",&x1,&y1);
    printf("Enter the second point (x2 y2): ");
    scanf("%f %f",&x2,&y2);
    if (x1==x2)
    {
        printf("The line is vertical, cannot find slope. \n");
    }else{
        m=(y2-y1)/(x2-x1);
        printf("The slope is: %f",m);
        c=y1-m*x1;
        printf("The intercept is: %f",c);
    }
    return 0;
}
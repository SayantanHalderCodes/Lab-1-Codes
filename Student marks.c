#include <stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,a;
    int r;
    char n[20];
    printf("Enter the Name of the Student: ");
    scanf("%s",&n);
    printf("Enter the Roll number of the Student: ");
    scanf("%d",&r);
    printf("Enter the marks of the five subjects obtained by the Student: ");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    if (m1>100||m2>100||m3>100||m4>100||m5>100)
    {
        printf("Invalid Input, You have given marks more than 100.");
    }else{
        a=(m1+m2+m3+m4+m5)/5;
        printf("Name: %s\n",n);
        printf("Roll Number: %d\n",r);
        printf("Percentage of the Student: %f",a);
    }
    return 0;
}
#include<stdio.h>
int main()
{
	int r,min,maj,ac,ae;
	r=5;
	min=4;
	maj=6;
	ac=3.14*r*r;
	ae=3.14*min*maj;
	printf("Area of Circle: %dcm \n",ac);
	printf("Area of Ellipse: %dcm",ae);
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the Numbers:");
	scanf("%d",&a);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The Numbers after swapping are:%d",a);
	printf(" %d",b);
	return 0;
}

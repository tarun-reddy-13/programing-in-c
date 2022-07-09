#include<stdio.h>
int main()
{
	float rad,res;
	printf("Enter the radius of the circle :");
	scanf("%f",&rad);
	res=(3.141)*rad*rad;
	printf("Area of circle is %f having the radius %f",res,rad);
	return 0;
}
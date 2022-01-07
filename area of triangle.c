#include<stdio.h>
main()
{
	float ar,b,h;
	printf("\nEnter the base and height of triangle : ");
	scanf("%f%f",&b,&h);
	ar=(0.5)*b*h;
	printf("\nArea of the triangle for give base and height is : %0.3f ",ar);
	return 0;
}

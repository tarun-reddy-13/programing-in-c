#include<stdio.h>
main()
{
	float a,b,c;
	printf("\nEnter th values of two angles of the triangle : ");
	scanf("%f%f",&a,&b);
	c=180-(a+b);
	printf("\nThird angle of the triangle is : %g",c);
	return 0;
}
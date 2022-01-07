#include<stdio.h>
main()
{
	float b,h,ar;
	printf("\nEnter the length and height of the parallelogram : ");
	scanf("%f%f",&b,&h);
	ar=b*h;
	printf("\nThe area of the parallelogram with given dimensions is : %0.3f",ar);
	return 0;
}


#include<stdio.h>
main()
{
	float r,sa,v;
	printf("\nEnter the value of radius : ");
	scanf("%f",&r);
	sa=4*3.14*r*r;
	v=(4/3)*3.14*r*r*r;
	printf("\nSurface area of sphere : %0.2f\tVolume of cube : %0.2f",sa,v);
	return 0;
}

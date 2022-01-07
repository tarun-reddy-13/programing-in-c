#include<stdio.h>
main()
{
	float v,r,l,h,sa;
	printf("\nEnter the value of radius : ");
	scanf("%f",&r);
	printf("\nEnter the value of slant height : ");
	scanf("%f",&l);
	printf("\nEnter the value of height : ");
	scanf("%f",&h);
	sa=3.14*r*(r+l);
	v=(3.14*r*r*h)/3.0;
	printf("\nSurface area of cone : %0.2f\tVolume of cube : %0.3f",sa,v);
	return 0;
}

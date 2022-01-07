#include<stdio.h>
main()
{
	float sa,v,r,h;
	printf("\nEnter the values of radius and height of the cylinder : ");
	scanf("%f%f",&r,&h);
	sa=2*3.14*r*(r+h);
	v=3.14*r*r*h;
	printf("\nsurface area of cylinder : %0.3f\tvolume of the cylinder : %0.3f",sa,v);
	return 0;
}

#include<stdio.h>
main()
{
	float l,b,h,sa,v;
	printf("Enter the values of length, bredth, height of the cuboid : ");
	scanf("%f%f%f",&l,&b,&h);
	sa=2*(l*b+b*h+h*l);
	v=l*b*h;
	printf("\nSurface area of cuboid : %0.3f\tvolume of the cuboid : %0.3f",sa,v);
	return 0;
}

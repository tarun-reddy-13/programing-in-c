#include<stdio.h>
main()
{
	float sa,v,a;
	printf("\nEnter the value of the side of the cube : ");
	scanf("%f",&a);
	v=a*a*a;
	sa=6*a*a;
	printf("\nsurface area of the cube : %0.3f\t volume of the cube : %0.3f",sa,v);
	return 0;	
}

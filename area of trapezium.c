#include<stdio.h>
main()
{
	float ar,a,b,h;
	printf("\nEnter the lengths of parallel sides of the trapezium : ");
	scanf("%f%f%f",&a,&b,&h);
	ar=((a+b)/2.0)*h;
	printf("\narea of the trapezium for given dimensions is : %0.3f ",ar);
	return 0;
}

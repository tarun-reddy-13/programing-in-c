#include<stdio.h>
#include<math.h>
main()
{
	float n;
	printf("Enter any fractional number : ");
	scanf("%f",&n);
	printf("\nRight most digit of integral part of %f is %0.0f",n,fmod(n,10));
	return 0;
}
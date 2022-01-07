#include<stdio.h>
main()
{
	float p,t,r,i;
	printf("Ënter principle amount : ");
	scanf("%f",&p);
	printf("\nEnter the time given : ");
	scanf("%f",&t);
	printf("\nEnter annual intrest rate : ");
	scanf("%f",&r);
	i=(p*t*r)/100.0;
	printf("\nSimple intrest for given data : %0.5f",i);
	return 0;
}

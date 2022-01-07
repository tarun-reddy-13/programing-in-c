#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,i,n,a,b;
	printf("Ënter principle amount : ");
	scanf("%f",&p);
	printf("\nEnter the time given (in Years): ");
	scanf("%f",&t);
	printf("\nEnter annual intrest rate : ");
	scanf("%f",&r);
	printf("\nEnter the compounding frequency per year : ");
	scanf("%f",&n);
	i=p*(pow(1+r/n,n*t));
	printf("\nCompound intrest for given data : %0.5f",i);
	return 0;
}

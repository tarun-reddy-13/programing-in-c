#include<stdio.h>
#include<math.h>
main()
{
	float c,f;
	printf("\nEnter temperature in celcius : ");
	scanf("%f",&c);
	printf("\nTemperature in farenheit : %0.1f",(c*(9/5))+32);
	return 0;
}
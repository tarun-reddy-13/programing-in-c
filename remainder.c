#include<stdio.h>
main()
{
	int a,b;
	printf("\nEnter any two integers : ");
	scanf("%d%d",&a,&b);
	printf("\nRemainder of the division of %d and %d is %d.",a,b,a%b);
	return 0;
}

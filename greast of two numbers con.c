#include<stdio.h>
main()
{
	int a,b;
	printf("\nEnter any two integers : ");
	scanf("%d%d",&a,&b);
	a>b?printf("\n%d is greater.",a):printf("\n%d is greater.",b);
	return 0;
}
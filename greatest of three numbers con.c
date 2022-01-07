#include<stdio.h>
main()
{
	int a,b,c;
	printf("\nEnter any three integers : ");
	scanf("%d%d%d",&a,&b,&c);
	a>b&&a>c?printf("\n%d is greater.",a):((b>c)?printf("\n%d is greater.",b):printf("\n%d is greater.",c));
	return 0;
}
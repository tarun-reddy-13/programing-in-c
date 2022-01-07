#include<stdio.h>
main()
{
	int a,b,c;
	printf("\nEnter the values of three sides of the triangle : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
		printf("\nEquilaterial Triangle.");
	else if(a==b||b==c||c==a)
		printf("\nScalen Triangle.");
	else
		printf("\nIsocesles Triangle.");
	return 0;
}
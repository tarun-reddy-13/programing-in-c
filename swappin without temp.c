#include<stdio.h>
main()
{
	int a,b;
	printf("\nEnter any two integers : ");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping : a : %d\tb : %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping :  a : %d\tb : %d",a,b);
	return 0;
}

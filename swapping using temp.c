#include<stdio.h>
main()
{
	int a,b,temp;
	printf("\nEnter any two integers : ");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping : a : %d\tb : %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping :  a : %d\tb : %d",a,b);
	return 0;
}

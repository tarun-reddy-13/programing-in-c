#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter any two numbers : ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("\n%d is greater.\n%d is smaller.",a,b);
	}
	else
	{
		printf("\n%d is gerater.\n%d is smaller.",b,a);
	}
	return 0;
}
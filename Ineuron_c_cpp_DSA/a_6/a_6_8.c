#include<stdio.h>
int main()
{
	int n,i,prime=1;
	printf("Enter any number : ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		}
	}
	prime==1?printf("\nPrime number."):printf("\nNon Prime number.");
	return 0;
}
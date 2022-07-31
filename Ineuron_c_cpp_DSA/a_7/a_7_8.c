#include<stdio.h>
int main()
{
	int i,prime,j,n;
	printf("Enter any number : ");
	scanf("%d",&n);
	for(i=n+1;1;i++)
	{
		prime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			prime=0;
		}
		if(prime)
		{
			printf("prime number next to %d is %d",n,i);
			return 0;
		}
	}
}
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("How many numbers are to be added : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	printf("Sum of squares of first %d natural numbers : %d",n,sum);
	return 0;
}
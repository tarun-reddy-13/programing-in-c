#include<stdio.h>
void odd_series(int n)
{
	if(n==1)
	{
		printf(" %d",n);
	}
	else
	{
		if(n%2!=0)
			printf("%d ",n);
		odd_series(n-1);
	}
}
int main()
{
	int n;
	printf("Enetr the value of n : ");
	scanf("%d",&n);
	odd_series(n);
	return 0;
}
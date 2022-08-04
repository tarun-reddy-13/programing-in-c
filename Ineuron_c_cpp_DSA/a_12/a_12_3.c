#include<stdio.h>
void odd_series(int n,int N)
{
	if(N>=n)
	{
		if(n%2==1)
			printf("%d ",n);
	}
	else if(N%2!=0)
	{	
		printf("%d ",N);
	}
	odd_series(n,N+1);
}
int main()
{
	int n,N=1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	odd_series(n,N);
	return 0;
}
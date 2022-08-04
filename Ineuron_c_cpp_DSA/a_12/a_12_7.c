#include<stdio.h>
void nat_sq_series(int n,int N)
{
	if(N==n)
		printf("%d ",n*n);
	else
	{	
		printf("%d ",N*N);
		nat_sq_series(n,N+1);
	}
}
int main()
{
	int n,N=1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	nat_sq_series(n,N);
	return 0;
}
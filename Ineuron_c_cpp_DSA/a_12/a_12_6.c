#include<stdio.h>
void evn_series(int n,int N)
{
	if(N==n)
	{
		if(n%2==0)
			printf("%d ",n);
	}
	else if(N%2==0)
	{	
		printf("%d ",N);
		evn_series(n,N+2);
	}
}
int main()
{
	int n,N=2;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	evn_series(n,N);
	return 0;
}
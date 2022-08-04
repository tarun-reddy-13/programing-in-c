#include<stdio.h>
void evn_series(int n)
{
	if(n==2)
		printf("%d ",n);
	else 
	{
		if(n%2==0)
			printf("%d ",n);
		evn_series(n-1);
	}
}
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	evn_series(n);
	return 0;
}
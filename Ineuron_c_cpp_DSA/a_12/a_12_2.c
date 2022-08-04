#include<stdio.h>
void nat_series(int n)
{
	if(n==1)
		printf("%d ",1);
	else
	{	
		printf("%d ",n);
		nat_series(n-1);
	}
}
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	nat_series(n);
	return 0;
}
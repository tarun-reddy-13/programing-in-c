#include<stdio.h>
int main()
{
	int x,sum=0;
	printf("Enter any number :");
	scanf("%d",&x);
	while(x!=0)
	{
		sum=sum+x%10;
		x=x/10;
	}
	printf("Sum of the digits in given number : %d",sum);
	return 0;
}
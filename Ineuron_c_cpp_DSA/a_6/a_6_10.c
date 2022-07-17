#include<stdio.h>
int main()
{
	int n,num,rev=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rev=rev*10+n%10;
		n/=10;		
	}	
	printf("Sum of the digits in %d is %d",num,rev);
	return 0;
}
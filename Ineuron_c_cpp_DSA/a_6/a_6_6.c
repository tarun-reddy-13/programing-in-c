#include<stdio.h>
int main()
{
	int n,f=1,i;
	printf("Enter any number to find it's factorial : ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		f=f*i;
	}
	printf("Factorial of %d is %d",n,f);
	return 0;	
}
	
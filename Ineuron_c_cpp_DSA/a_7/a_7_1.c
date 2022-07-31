#include<stdio.h>
int main()
{
	int n,a=0,b=1,sum=0,i;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	if(n==1)
		printf("%dth term of fibbonaci series is 0",n);
	else if(n==2)
		printf("%dth term of fibbonaci series is 1",n);
	else
	{	
		for(i=3;i<=n;i++)
		{
			sum=a+b;a=b;b=sum;	
		}
		printf("%dth term of fibbonaci series is %d",n,sum);
		return 0;
	}
}
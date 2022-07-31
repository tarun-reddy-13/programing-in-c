#include<stdio.h>
int main()
{
	int n,a=0,b=1,sum=0,i;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Fibbonacci series : \n");
	printf("%d  %d  ",a,b);
	for(i=3;i<=n;i++)
	{
		sum=a+b;a=b;b=sum;
		printf("%d  ",sum);	
	}
	return 0;
}
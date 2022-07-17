#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("How many numbers are to be added : ");
	scanf("%d",&n);
	for(i=1;i<=(n*2);i++)
	{
		if(i%2==0)
			sum=sum+i;
	}
	printf("Sum of first %d even numbers : %d",n,sum);
	return 0;
}
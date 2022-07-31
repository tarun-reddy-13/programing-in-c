#include<stdio.h>
int main()
{
	int key,a=0,b=1,sum=0,i;
	printf("Enter the value of n : ");
	scanf("%d",&key);
	if(key==a||key==b)
	{
		printf("%d is present in fibbonacci series.",key);
		return 0;	
	}
	else
	{
		while(1)
		{
			sum=a+b;a=b;b=sum;
			if(sum==key)
			{
				printf("%d is present in fibbonacci series.",key);
				return 0;
			}
			else if(sum>key)
			{
				printf("%d is not present in fibbonacci series.",key);
				return 0;
			}
		}
	}
}
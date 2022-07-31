#include<stdio.h>
int main()
{
	int prime,i,j;
	printf("Prime numbers between under 100: \n");
	for(j=1;j<=100;j++)
	{
		prime=1;
		for(i=2;i<=j/2;i++)
		{
			if(j%i==0)
				prime=0;
		}
		if(prime)
			printf("%d  ",j);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int st,ep,prime,i,j;
	printf("Enter the starting point and ending point of the series in format (st ep): ");
	scanf("%d%d",&st,&ep);
	printf("Prime series between %d anf %d:\n",st,ep);
	for(j=st;j<=ep;j++)
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
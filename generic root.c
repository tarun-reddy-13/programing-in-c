#include<stdio.h>
main()
{
	int n,sum=0,num;
	printf("\nEnter any number : ");
	scanf("%d",&n);
	num=n;
	while(n>9)
	{
		sum=0;
		while(n>0)
		{
			sum=sum+n%10;
			n=n/10;
		}
		n=sum;
		
	}
	printf("\nThe generic root of %d is %d.",num,sum);
	return 0;
}
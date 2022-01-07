#include<stdio.h>
#include<math.h>
main()
{
	int n,p,s=0;
	printf("\nEnter anu number : ");
	scanf("%d",&n);
	p=n*n;
	while(p!=0)
	{
		
		s=s+p%10;
		p=p/10;
	}
	if(s=n)
		printf("\nNeon Number.");
	else
		printf("\nNot a neon number.");
	return 0;
}
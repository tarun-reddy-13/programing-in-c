#include<stdio.h>
int main()
{
	int i,n;
	printf("How many values are to be printed : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i*i);
	}
	return 0;
}
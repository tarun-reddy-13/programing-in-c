#include<stdio.h>
int main()
{
	int n,num,c=0;
	printf("Enter any number : ");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		n=n/10;
		c+=1;
	}
	printf("No.of digits present in %d are %d",num,c);
	return 0;
}
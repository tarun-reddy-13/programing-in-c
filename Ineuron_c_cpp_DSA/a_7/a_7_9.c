#include<stdio.h>
int main()
{
	int n,num,sum=0,c=0;
	printf("Enter any number :");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	n=num;
	while(n!=0)
	{
		sum+=pow(n%10,c);
		n/=10;
	}
	if(num==sum)
		printf("%d is an armstrong number",num);
	else
		printf("%d is not an armstrong number",num);
}
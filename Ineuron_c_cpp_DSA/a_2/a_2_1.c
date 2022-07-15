#include<stdio.h>
int main()
{
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	x=x%10;
	printf("Last digit of entered number: %d",x);
	return 0;
}
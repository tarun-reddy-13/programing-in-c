//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
	int num,c=0;
	printf("Enter any number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		c++;
	}
	if(c==3)
		printf("Given number is a three-digit number");
	else
		printf("Given number is not a three-digit number");
	return 0;
}
//Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num%5==0)
		printf("Divisible by 5");
	else
		printf("Dosen't divisible by 5");
}
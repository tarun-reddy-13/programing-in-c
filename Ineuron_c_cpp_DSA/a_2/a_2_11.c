//Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
	int num,n;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Enter a number for appending to previous number : ");
	scanf("%d",&n);
	num=num*10+n;
	printf("new number : %d",num);
	return 0;
}
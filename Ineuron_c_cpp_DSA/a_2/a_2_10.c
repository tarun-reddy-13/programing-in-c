//Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	n=n-(n%10);
	printf("\nNumber stored in variable n : %d",n);
	return 0;
}
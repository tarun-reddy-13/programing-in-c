//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
	float DLR=76.23,RPS,USD;
	printf("Enter amount in INR : ");
	scanf("%f",&RPS);
	USD=RPS/DLR;
	printf("\nAmount in USD : %0.2f",USD);
	return 0;
}
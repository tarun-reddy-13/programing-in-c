#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter any two numbers:");
	scanf("%d%d",&x,&y);
	printf("Before swapping : x : %d\ty : %d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping :  x : %d\ty : %d",x,y);
	return 0;
}
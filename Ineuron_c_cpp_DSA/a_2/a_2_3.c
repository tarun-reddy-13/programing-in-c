#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter any two numbers:");
	scanf("%d%d",&x,&y);
	printf("Before swapping : x : %d\ty : %d\n",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("After swapping :  x : %d\ty : %d",x,y);
	return 0;
}
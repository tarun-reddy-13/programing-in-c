#include<stdio.h>
int main()
{
	float per,l,b;
	printf("\nEnter the length and bredth of rectangle : ");
	scanf("%f%f",&l,&b);
	per=2*(l+b);
	printf("\nperimeter of the rectangle for given dimensions is : %0.3f ",per);
	return 0;
}

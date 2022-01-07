#include<stdio.h>
main()
{
	int choice;
	float r,per,a,b,c;
	printf("1. Perimeter of the circle.\t2.Perimeter of the triangle.\nEnter your choice : ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\nEnter the radius of the circle : ");
		scanf("%f",&r);
		per=2*3.14*r*r;
		printf("\nperimeter of the circle for give radius is : %0.3f ",per);
	}
	else if(choice==2)
	{
		printf("\nEnter the values of sides of the triangle : ");
		scanf("%f%f%f",&a,&b,&c);
		per=a+b+c;
		printf("\nPerimeter of the triangle : %0.2f",per);
	}
	else
		printf("\nInvalid choice.");
	return 0;	
		
}

#include<stdio.h>
main()
{
	float ar,d1,d2;
	printf("\nEnter the lengths of the diagonals of the rhombus : ");
	scanf("%f%f",&d1,&d2);
	ar=(d1*d2)/2.0;
	printf("\nArea of the rhombus for given diagonals : %0.3f ",ar);
	return 0;
}

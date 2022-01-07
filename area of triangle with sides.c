#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,s,ar;
	printf("Ënter the values of sides of the triangle : \n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2.0;
	ar=sqrt(s*s-a*s-b*s-c);
	printf("\nArea of the triangle for given dimensions : %0.3f",ar);
	return 0;
}

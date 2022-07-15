//9. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
	int a; float b; char c; double d;
	printf("Size of int : %d\n",sizeof(a));
	printf("Size of float : %d\n",sizeof(b));
	printf("Size of char : %d\n",sizeof(c));
	printf("Size of double : %d\n",sizeof(d));
	return 0;
}


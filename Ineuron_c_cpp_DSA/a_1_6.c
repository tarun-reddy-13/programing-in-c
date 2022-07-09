#include<stdio.h>
int main()
{
	char user[20];
	scanf("%[^\n]s",&user);
	printf("\"Hello, %s\"",user);
	return 0;
}
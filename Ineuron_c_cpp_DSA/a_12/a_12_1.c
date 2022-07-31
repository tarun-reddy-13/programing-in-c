#include<stdio.h>
void printn(int n)
{
	int x=1;
	if(x==n)
		return n;
	else
		print("%d",x);
		return printn(x+1);
}
int main()
{
	printn(10);
	return 0;
}
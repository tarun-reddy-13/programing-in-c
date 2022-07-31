#include<stdio.h>
int main()
{
	int arm,num,sum=0,c=0,i;
	for(i=0;i<=1000;i++)
	{
		arm=0;
		num=i;
		while(num!=0)
		{
			num=num/10;
			c++;
		}
		num=i;
		while(num!=0)
		{
			sum+=pow(num%10,c);
			num/=10;
		}
		if(i==sum)
			arm=1;
		if(arm)
			printf("%d  ",i);
		else
			continue;
	}
	return 0;
}
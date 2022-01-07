#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	printf("\nASCII Values : ");
	for(i=0;i<=225;i++)
	{
		printf("\n%c\t\t-\t\t%d",i,i);
		if(i%20==0)
			getch();
	}
	return 0;
}

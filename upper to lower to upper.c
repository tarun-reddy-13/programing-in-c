#include<stdio.h>
main()
{
	char ch;
	int choice;
	printf("\n1.Upper to lower\t2.lower to upper.\nEnter your choice : ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\nEnter the Alphabet in upper case : ");
		scanf("%c",&ch);
		printf("\nLower case alphaber of %c is %c.",ch,ch+32);
	}
	else if(choice==2)
	{
		printf("\nEnter the Alphabet in lower case : ");
		scanf("%c",&ch);
		printf("\nupper case alphaber of %c is %c.",ch,ch-32);
	}
	else
		printf("Error. Invalid choice");
	return 0;
}
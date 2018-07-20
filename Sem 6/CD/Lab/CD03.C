//Program To Check Whether A Given String Is Accepted By A Non-Recursive Grammar Or Not 

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char f;
	char s[10];
	clrscr();
	printf("The Grammar is:\n");
	printf("\nS->AB");
	printf("\nA->a|b");
	printf("\nB->a|b");
	f='y';
	while(f=='y'||f=='Y')
	{
		fflush(stdin);
		printf("\n\nEnter the string to be checked:");
		gets(s);
		if((strcmp(s,"aa")==0)||(strcmp(s,"ab")==0)||(strcmp(s,"ba")==0)||(strcmp(s,"bb")==0))
			printf("\nThe string is accepted by the given grammar.");
		else
			printf("\nThe string is not accepted by the given grammar.");
		printf("\n\nEnter y or Y to continue, any other key to exit: ");	
		scanf("%c",&f);
	}
getch();
}

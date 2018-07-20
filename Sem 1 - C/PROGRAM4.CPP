//print ASCII values along characters
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i; char ch;
	printf("\t ASCII \t charachter\n");
	for (i=1; i<=256; i++)
	{
		ch = i;
		printf("\t %d \t %c \n", i, ch);
	}
	getch();
}
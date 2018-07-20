#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str[30]; int len = 0; char *ch;
	clrscr();
	printf("Enter a string\n");
	gets(str);
	ch = str;
	while ( *ch != '\0')
	{       len++;
		ch++;
	}
	printf("Length = %d", len);
	getch();
}
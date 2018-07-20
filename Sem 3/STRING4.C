#include<stdio.h>
#include<conio.h>
void stringCopy(char *, char *);
void main()
{       char st1[20], st2[20];
	clrscr();
	printf("Enter a strings\n");
	gets(st1);
	stringCopy(st1, st2);
	printf("Copied string: %s", st2);
	getch();
}
void stringCopy(char *c1, char *c2)
{
	while(*c1 != '\0')
	{
		*c2 = *c1;
		c1++;
		c2++;
	}
	*c2 = NULL;
}
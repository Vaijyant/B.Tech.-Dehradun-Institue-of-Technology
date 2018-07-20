#include<stdio.h>
#include<string.h>
#include<conio.h>
void stringConcat(char *, char *);
void main()
{       char st1[20], st2[20];
	clrscr();
	printf("Enter two strings\n");
	gets(st1); gets(st2);
	stringConcat(st1, st2);
	getch();
}
void stringConcat(char *c1, char *c2)
{
	char str[40]; int c =0;
	while(*c1 != '\0')
	{
		str[c] = *c1;
		c1++;
		c++;
	}
	str[c] = ' ';
	c++;
	while(*c2 != '\0')
	{
		str[c] = *c2;
		c2++;
		c++;
	}
	str[c] = '\0';
	printf("concatenated string is: %s", str);
}

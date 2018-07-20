//compare strings
#include<stdio.h>
#include<conio.h>
int stringCompare(char *, char *);
void main()
{
	char str1[20], str2[20]; int result;
	clrscr();
	printf("Enter two strings to compare \n");
	gets(str1); gets(str2);
	result = stringCompare(str1, str2);
	if(result == 1)
		printf("Strings are not equal");
	else
		printf("Strings are equal");
	getch();
}
int stringCompare (char *c1, char *c2)
{
	int c = 0;
	while(*c1 != '\0')
	{
		if (*c1 == *c2)
		{
			c1++;
			c2++;
		}
		else
		{
			return (1);
		}
		return 0;
	}
}


//Write a program which takes a pointer to a string as a parameter, which replaces all spaces in that string minus signs,and delivers the number of spaces it replaced.
#include <stdio.h>
int main()
{
	char *ch;
	int l=0,c=0;
	clrscr();
	printf("\nenter any string = ");
	scanf("%[^\n]s",ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l>=0)
	{
		if(*ch==' ')
		{
			*ch='-';
			c++;
		}
		ch--;
		l--;
	}
	ch++;
	ch++;
	printf("The number spaces replaced is : %d",c);
	getch();
	printf("\nThe string is : \n%s",ch);
	return 0;
}
//Write a program that will read a line of text containing more than three words and replaces all the blank spaces with an underscore(_).
#include<stdio.h>
int main()
{
	char *ch;
	int l=0, i, c=0;
	clrscr();
	printf("Enter any string =\n");
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
			*ch='_';
			c++;
		}
		ch--;
		l--;
	}
	ch++;
	ch++;
	printf("\nThe number spaces replaced is : %d",c);
	printf("\nThe string is : \n%s",ch);
	return 0;
}

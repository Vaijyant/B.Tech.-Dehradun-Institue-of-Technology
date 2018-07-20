//Write a program that reads the following text and count the number of thimes word "it" appears in it.
#include <stdio.h>
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
		if(*ch=='t')
		{
			ch--;
			if(*ch=='i')
				c++;
		}
		ch--;
		l--;
	}
	ch++;
	printf("\nThe number 'it' is : %d",c);
	return 0;
}
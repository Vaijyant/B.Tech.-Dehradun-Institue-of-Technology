//Write a program to find the number of times that a given word(i.e. a short string) occurs in a sentence(i.e. a long string)
#include <stdio.h>
int main()
{
	char *ch;
	int l=0, c=0;
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
		if(*ch=='e')
		{
			ch--;
			if(*ch=='h')
			{
				ch--;
				if(*ch=='t')
					c++;
			}
		}
		ch--;
		l--;
	}
	ch++;
	printf("The number \"the\" is: %d", c);
	return 0;
}
		 s
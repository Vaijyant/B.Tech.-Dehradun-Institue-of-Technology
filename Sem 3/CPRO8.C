//Write a function that will scan a character string passed as an argument and convert all lower case characters into their upper case equivalent.
#include <stdio.h>
int main()
{
	char *ch;
	int l=0,i;
	clrscr();
	printf("enter any string = \n");
	scanf("%[^\n]s", ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l-1>=0)
	{
		if(*ch>=97&&*ch<=122)
		*ch=*ch-32;
		ch--;
		l--;
	}
	ch++;
	printf("\nstring in upper case = %s",ch);
	return 0;
}

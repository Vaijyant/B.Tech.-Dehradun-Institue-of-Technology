//Write a program that counts the number of occurences of 'e'
#include<stdio.h>
int main()
{	
	char *ch;
	int l=0, i, c=0;
	clrscr();
	printf("Enter any string\n");
	scanf("%[^\n]s",ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l>=0)
	{
		if(*ch=='e')
			c++;
		ch--;
		l--;
	}
	ch++;
	printf("The number 'e' is : %d",c);
	return 0;
}
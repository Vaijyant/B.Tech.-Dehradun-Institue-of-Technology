//Program 15 : To check whether given string is palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char st[20];
	printf("Enter a word\n");
	gets(st);
	int l=strlen(st);
	int m=l/2, i, k=0, c=(l-1);
	for(i=0; i<=m; i++)
	{
		if(st[i] == st[c])
		{
			k++;

		}
		c--;
	}
	if (k==i)
		printf("Palindrome");
	else
		printf("Not palindrome");
       getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch, str[32];
	int flag = 0, i=0;
	clrscr();
	printf("Enter a string to find the character:\n");
	gets(str);
	printf("enter an albhabet to search:\n");
	scanf("%c", &ch);
	while(str[i] != '\0')
	{
		if(str[i] == ch)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if(flag == 1)
	{
		printf("There is an occurrence of '%c'.", ch);
	}
	else
	{
		printf("There is no occurrence of '%c'.", ch);
	}
	getch();
}
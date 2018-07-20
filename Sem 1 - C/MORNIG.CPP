#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char gn[20] = "Good Night";
	char gm[20] = "Good Morning";
	int ch;
	printf("Enter 1 for \"Good Night\" or 2 for \"Good Morning\"\n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
		printf("%s", gn); break;
		case 2:
		printf("%s", gm); break;
		default :
		printf(":P, seriously?? Enter a valid choce!!");
	}
	getch();
}
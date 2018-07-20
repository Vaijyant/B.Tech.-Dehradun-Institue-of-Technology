#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int c=1;
	printf("This is pattern program 1\n");
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d ", c);
			c++;
		}
		printf("\n");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
void toBinary(int a)
{
	int i=6;
	int b[7] = {0, 0, 0, 0, 0, 0, 0};
	while(a!=0)
	{
		b[i]=a%2;
		a=a/2;
		i--;
	}
	i=0;
	while(i<7)
	{
		printf("%d", b[i]);
		i++;
	}
}
void main()
{
	int i=0;
	clrscr();
	printf("corresponding binaries of alphabets are\n");

	for(i=65; i<=90; i++)
	{
		printf("'%c': ", i);
		toBinary(i);
		printf("\t");
	}
	printf("\n\n");
	for(i=97; i<=122; i++)
	{
		printf("'%c' : ", i);
		toBinary(i);
		printf("\t");
	}
	getch();
}
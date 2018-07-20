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
	int i=0, c;
	char str[32];
	clrscr();
	printf("Enter a string: ");
	gets(str);
	printf("Equivalent Binary is: \n");

	while(str[i] != '\0')
	{
		c = (int) str[i];
		toBinary(c);
		printf(" ");
		i++;
	}
	getch();
}
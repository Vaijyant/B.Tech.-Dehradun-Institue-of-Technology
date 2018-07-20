#include<stdio.h>
#include<conio.h>
void main()
{
	int i, s=0;

	clrscr();
	printf("Sum of A+B+ ... +Z = ");
	for(i=65; i<=90; i++)
		s=s+i;
	printf("%d\n", s);
	s=0;
	printf("Sum of a+b+ ... +z = ");
	for(i=97; i<=122; i++)
		s=s+i;
	printf("%d", s);
	getch();

}
//Program 20 : calculate factorial of a given number using recursive function
#include<stdio.h>
#include<conio.h>
int rec (int );
void main()
{
	clrscr();
	int num, fact;
	printf("Enter a number to find factorial\n");
	scanf("%d", &num);
	fact = rec(num);
	printf("Factorial = %d", fact);
	getch();
}
int rec (int x)
{
	int f;
	if (x==1)
		return(1);
	else
		f=x*rec(x-1);
	return (f);
}
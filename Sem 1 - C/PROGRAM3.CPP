//take two numbers and print sum
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, sum;
	printf("Enter two numbers\n");
	scanf("%d%d", &a, &b);
	sum = a+b;
	printf("Sum = %d", sum);
	getch();
}
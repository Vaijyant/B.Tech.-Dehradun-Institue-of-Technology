#include<stdio.h>
int main()
{
	int a, b;
	clrscr();
	printf("Enter two numbers to swap\n");
	scanf("%d %d", &a, &b);
	printf("A = %d\nB = %d\n*****X*****\n", a, b);

	a=a+b;
	b=a-b;
	a=a-b;
	printf("A = %d\nB = %d", a, b);
	return 0;
}
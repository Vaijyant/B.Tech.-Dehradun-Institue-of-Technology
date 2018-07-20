//Program to implement biscection method
#include<stdio.h>
#include<conio.h>
void main()
{

	int c=0, n; float a, b, ans= 1;
	clrscr();
	printf("Objective of the program is to find the roots of the equation x^3 + 2x - 7\n");
	while (ans>0)
	{
		c++;
		ans = (c*c*c)+2*c-7;

	}
	b = c;
	a = c-1;

	printf("Enter numnber of iterations you want to perform\n");
	scanf("%d", &n);
	for(c=1; c<=n; c++)
	{
		ans = (a+b)/2;
		if (ans>0)
			b = ans;
		else
			a = ans;
	}
	printf("Answer = %f", ans);
	getch();
}


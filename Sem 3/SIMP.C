//Program to implement Simpsons 1/3 rule
#include<stdio.h>
#include<conio.h>
void main()
{
	int i; float x[6], y[5], ans, sum = 0;
	clrscr();
	x[0] = 0;
	for (i=0; i<=4; i++)
	{
		x[i+1] = x[i] + 0.25;
		y[i] = 1/(1+(x[i]*x[i]));
	}
	printf("x\t\t\ty\n");
	for (i =0; i<5; i++)
	{
		printf("%f\t%f\n", x[i], y[i]);
	}
	printf("\n");
	sum = x[0] + x[4];
	for (i=1; i<4; i++)
	{
		if(i%2==0)
		{
			sum = sum + 2*y[i];
		}
		else
		{
			sum = sum + 4*y[i];
		}
	}
	ans = sum * 0.25/3 ;
	printf("\n\nAnswer for the equation 1/(1+xý) is %f", ans);
	getch();

}
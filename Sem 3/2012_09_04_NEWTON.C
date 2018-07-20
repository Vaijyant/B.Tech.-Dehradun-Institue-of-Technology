//To find the real roots of the equation f(x) = x^3 - x^2 + x -7
#include<stdio.h>
#include<conio.h>

float f(float );
float df(float );
void main()
{
	int a, b, n=1, i; float x0, x1;
	printf("The objective of this program is to calculate value of \nf(x) = x^3 - x^2 + x -7\nby Newton Raphson method\n");
	while (f(n)*f(n+1)<0)
	{
		n++;
	}

	a = n-1; b = n;
	printf("Value of a and b is %d and %d respectively\n", a, b);
	x0 = (float)(a+b)/2;
	printf("Enter number of iterations you want to perform\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		x1 = x0 - (float)f(x0)/df(x0);
		printf("Value at iteration #%d: %f \n", i, x1);
		x0 = x1;
	}
	printf("Answer is = %f", x1);
	getch();
}
float f(float x)
{
	float ans = x*x*x + 2*x*x + x -7;
	return (ans);
}

float df(float x)
{
		float ans = 3*x*x + 4*x + 1;
		return ans;
}
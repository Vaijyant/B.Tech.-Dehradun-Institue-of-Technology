//Program 6: TO implement Iterative method for f(x) = y = x^3 - 2x + 1
#include<stdio.h>
#include<conio.h>

float f(float );
float phi(float );
void main()
{
	float a, b, c=-10, x0, ans; int num, i;
	printf("The objective of this program is to find roots of the equation\nf(x) = x^3 - 2x + 1\nBy iterative method\n");
	while( f(c)<0 )
	{
		c++;
	}
	a = c-1; b = c;
	if(fabs(f(a))<fabs(f(b)))
	{
		x0=a+0.2;

	}
	else
	{
		x0=b-0.2;
	}
	printf("Value of a and b taken are %f and %f\n", a, b);
	printf("Enter number of iterations you want to perform\n");
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
		ans = phi(x0);
		printf("Iteration #%d: %f\n", i, ans);
		x0 = ans;
	}
	getch();

}
float f(float x)
{
	float ans = x*x*x - 2*x + 1;
	return ans;
}
float phi(float x)
{
	float ans = (x*x*x + 1)/2;
	return ans;
}

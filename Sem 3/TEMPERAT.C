#include<stdio.h>
int main()
{
	double f, c;
	clrscr();
	printf("Enter the temperature in Fahrenheit\n");
	scanf("%f", &f);
	c=(5.0/9.0)*(f-32);
	printf("Temperature in Centigrade = %f", c);
	return 0;
}
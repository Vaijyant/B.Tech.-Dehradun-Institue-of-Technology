//Write a C program to find the exponent series of 1+x+(x2/2!)+(x3/3!)+....+(xn/n!)
#include<math.h>
#include<conio.h>
void main()
{
	int x, n, i, j, fact=1; float sum = 1;
	clrscr();
	printf("Enter value of x and n to caluclate the value of the series 1+x+(x^2/2!)+(x^3/3!)+....+(x^n/n!)\n");
	scanf("%d%d", &x, &n);
	for (i=1; i<=n; i++)
	{
		for(j=i; j>=1; j--)
			fact= fact*j;
		sum = sum + (pow(x,i)/fact);
		fact = 1;
	}
	printf("Result = %f", sum);
}
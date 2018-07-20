/*Program 8: calculate sin x
from the series x-x^3/3!+x^5/5!-x^7/7!+...+x^n/!n*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int i, j, fact=1, n, c=2; float x, ans=0;
	printf("Enter value for x and n\n");
	printf("value of sin x is calculated from the series :\n");
	printf("x-x^3/3!+x^5/5!+...+x^n/n!\n");
	printf("\nNote : x is in radians and -1<x<1\n");
	scanf("%f%d", &x, &n);
	for(i=1; i<=n; i=i+2)
	{
		for(j=i; j>=1; j--)
		{
			fact = fact*j;
		}
		ans = ans+(((pow(-1,c))*(pow(x,i))/fact));
		fact=1; c++;
	}
	printf("sin x = %f", ans);
	getch();
}


/*Write a C program to calculate the expression
cos(x)=x-(x^2/2!)+(x^4/4!)+...+n terms*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, fact=1, n, c=1; float x, ans;
	clrscr();
	printf("Enter value for x and n\n");
	printf("value of sin x is calculated from the series :\n");
	printf("x-x^2/3!+x^4/2!+...+x^n/n!\n");
	printf("\nNote : x is in radians and -1<x<1\n");
	scanf("%f%d", &x, &n);
	ans = x;
	for(i=2; i<=n; i=i+2)
	{
		for(j=i; j>=1; j--)
			fact = fact*j;
		ans = ans+(((pow(-1,c))*(pow(x,i))/fact));
		fact=1; c++;
	}
	printf("cos x = %f", ans);
	return 0;
}

//Write a C program to calculate the expression sin(x)=x-(x^3/3!)+(x^5/5!)+...+n terms
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, j, fact=1,c=2;
	float x, ans =0;
	clrscr();
	printf("enter value for x and n\nNOTE: x is in radian -1<x<1\n");
	scanf("%f%d", &x, &n);
	for(i=1; i<=n; i=i+2)
	{
		for(j=i; j>=1; j--)
			fact=fact*j;
		ans = ans + pow(-1, c)*(pow(x, i)/fact);
		fact=1; c++;
	}
	printf("ans = %f", ans);
	return 0;
}

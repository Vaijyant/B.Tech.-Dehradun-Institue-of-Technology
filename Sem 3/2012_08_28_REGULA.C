#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a, b, ans = -1, fx; int n, i=0;
	printf("The objective of this program is to calculate root of the equation\nf(x) = 2x - log x - 6 by Regula Falsi method");

	printf("\nEnter number of iterations you want to perform\n");
	scanf("%d", &n);
	while(ans<0)
	{
	    i++;
	    ans = 2*i-log(i) - 6;
	}
	a = i-1;
	b = i;
	for(i=1; i<=n; i++)
	{
	    ans = a - (b-a)*(2*a-log(a)-6)/((2*b-log(b)-6) - (2*a-log(a)-6));
	    fx =  2*ans-log(ans)-6;
	    printf("\nInteration %d:\nValue of root = %f\n", i, ans);
	    if (fx<0)
		a = ans;
	    else
		b = ans;

	}
	printf("Root of the equation is %f", ans);
	getch();
}
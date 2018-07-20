//caluclate x^y
#include<stdio.h>
int main()
{
	int x, y, i, ans=1;
	clrscr();
	printf("Enter base value and exponent value\n");
	scanf("%d%d", &x, &y);
	for(i=y;i>=1;i--)
	{
		ans = ans*x;
	}
	printf("Answer %d^%d = %d", x, y, ans);
	return 0;
}
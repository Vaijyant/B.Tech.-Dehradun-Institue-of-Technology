#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, j, n, fact=1; double  val, ans = 0;
	printf("Enter value for n for the series \n1/1! + 2/2! + --- + n/n! \n");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		for (j=i; j>=1; j--)
		{
			fact = fact*j;
		}
		val =(double)i/fact;
		ans = ans + val;
		fact=1;
	}
	printf("Ans= %f", ans);
	getch();
}
#include<math.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int i, j, n, fact=1; double ans=0, val;
	printf("Enter 'n' for 1ý - 2ý/2! + 3ý/3! - 4ý/4! + .... + ný/n!\n");// ý = ALT+253
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		for(j=i; j>=1; j--)
		{
			fact = fact*j;
		}
		val = (double) (i*i)/fact;
		ans = ans + (pow(-1, (i+1)))*val;
		fact=1;
	}
	printf("ANS = %f", ans);
	getch();
}

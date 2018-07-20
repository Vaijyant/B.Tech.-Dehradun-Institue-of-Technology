// Fibonacci function
#include <stdio.h>
int main()
{
	int a=0,b=1,c,n;
	clrscr();
	printf("Enter no. of digits in fibonacci series to be printed : ");
	scanf("%d",&n);
	printf("%d %d",a,b);
	while((n-2)!=0)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		n--;
	}
	return 0;
}

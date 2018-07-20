/*Fibonacci numbers form an infinite series
1 1 2 3 5 8 13.
Each number is the sum of the previous two numbers.
Write a program which will generate the series to n number of terms,
where n is accepted from the user.
*/
#include<stdio.h>
int main()
{
	int a=-1,b=1,c=0,num,i;
	clrscr();
	printf("enter your range\n");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}

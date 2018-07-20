/*Write a program to create a function to print all perfect numbers
between 1 to 500.
A number is called perfect if the sum of divisors of that number
is equal to number.
For example 28 is a perfect number, since 1 + 2 + 4 + 7 + 14 = 28. */
#include <stdio.h>
int main()
{
	int i, j, sum;
	clrscr();
	printf("Perfect numbers are as follows;\n");
	for(i=1; i<=500; i++)
	{
		sum = 0;
		for(j=1; j<i; j++)
		{
			if(i%j==0)
				sum = sum + j;
		}
		if(sum == i)
			printf("%d\t", i);
	}
	return 0;
}
/*Write a program to find out the prime factors of the given number.
Ex. Prime factors of 56 are 2, 2, 2, 7.*/
#include<stdio.h>
int main()
{
	int num, i, j, cnum;
	clrscr();
	printf("Enter a number:\n");
	scanf("%d", &num);
	cnum = num;
	j = num/2;
	for(i=2; i<=j; i++)
	{
		VICTOR:
		if(cnum%i == 0)
		{
			cnum=cnum/i;
			printf("%d\t", i);
			goto VICTOR;
		}
	}
	return 0;
}

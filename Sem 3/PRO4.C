#include<stdio.h>
void main()
{
	int num, sum;
	clrscr();
	printf("Enter a 4 digit number\n");
	scanf("%d", &num);
	sum = num%10 + (num/1000);
	printf("Sum of first and last digit = %d", sum);
}
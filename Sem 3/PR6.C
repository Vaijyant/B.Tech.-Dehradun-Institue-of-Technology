/*Write a program to reverse an integer (use do..while loop).
Example: If the input is 7931, then the output will be 1397.
The reversed  number should be stored in an integer.
Hint: n%10 can be used to extract the last digit.*/

#include<stdio.h>
int main()
{
	int num, l, rev=0;
	clrscr();
	printf("enter a number to reverse it\n");
	scanf("%d", &num);
	do
	{
		l=num%10;
		rev = rev*10+l;
		num = num/10;
	}
	while(num!=0);
	printf("Reversed number = %d", rev);
	return 0;
}
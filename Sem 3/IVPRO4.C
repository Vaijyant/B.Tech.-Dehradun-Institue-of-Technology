/*Write a program to print all the handsome numbers between 1 to 1000.
A number is called handsome if the sum of the digits of that number except last number is equal to last number.
For example 123 is a handsome number, since 1+2=3 */
#include<stdio.h>
int main()
{
	int i, ci, l_val, cut_val, sum=0;
	clrscr();
	for (i=1; i<1000; i++)
	{       ci =i;
		l_val = ci%10;
		ci = ci/10;
		while(ci!=0)
		{
			cut_val=ci%10;
			sum = sum + cut_val;
			ci =ci/10;
		}
		if (l_val == sum)
			printf("%d\t", i);
		sum = 0;
	}
	return 0;
}
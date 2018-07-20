//Program 7 : Display sum of all integers that are divisible by 6 but not divisible by and lie between 0 and 100
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, sum=0;
	for(i=1; i<100; i++)
	{
		if(i%6==0 && i%4!=0)
			sum = sum+i;
	}
	printf("Sum of integers between 0 & 100, which are divisible by 6 but not 4 = %d", sum);
	getch();
}
#include<stdio.h>
int main()
{
	int num;
	clrscr();
	printf("Enter a number \n");
	scanf("%d", &num);
	if (num%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
	return 0;
}
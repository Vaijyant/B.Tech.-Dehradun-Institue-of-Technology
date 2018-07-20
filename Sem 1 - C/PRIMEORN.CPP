#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, c=2, k=0;
	printf("Enter a number to check whether it is prime or not\n");
	scanf("%d", &num);
	while (c<=num)
	{
		if(num%c==0)
			k++;
		c++;
	}
	if(k==1)
		printf("%d is prime", num);
	else
		printf("%d is not prime", num);
	getch();
}
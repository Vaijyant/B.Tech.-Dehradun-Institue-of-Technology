#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, c=2, test=0;
	printf("Enter a natural number to check if it is prime\n");
	scanf("%d", &num);
	if(num == 1)
		printf("1 is neither prime nor composite");
	else
	{
		while (c<=num)
		{
			if (num%c == 0)
				test++;
			c++;
		}
		if (test == 1)
			printf ("%d is prime", num);
		else
			printf("%d is not prime", num);
	}
	getch();
}
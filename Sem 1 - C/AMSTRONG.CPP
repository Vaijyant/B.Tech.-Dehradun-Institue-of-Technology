//Program 4 : to check whether given number is Armstrong or not
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, cnum, c, ams = 0;
	printf("Enter a number to check whether it is an Armstrong number or not\n");
	scanf("%d", &num);
	cnum = num;
	while (cnum!=0)
	{
		c = cnum%10;
		ams = ams+(c*c*c);
		cnum = cnum/10;
	}
	if(ams == num)
		printf("%d is an armstrong number", num);
	else
		printf("%d is not an Armstrong number", num);
	getch();
}

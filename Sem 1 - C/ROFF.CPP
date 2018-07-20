//Program 6 : round off values
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float num, mnum; int round_val, cpy;
	printf("Enter a number to round off\n");
	scanf("%f", &num);
	cpy = num;
	mnum = cpy+0.5;
	if(num<=mnum)
		printf("round off value = %d", cpy);
	else
		printf("round off value = %d", (cpy+1));
	getch();
}

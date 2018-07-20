#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, rev=0, cut;
	printf("Enter a number to reverse it");
	scanf("%d", &num);
	do
	{
		cut = num%10;
		rev= rev*10+cut;
		num = num/10;
	}
	while(num!=0);
	printf("%d", rev);
	getch();
}
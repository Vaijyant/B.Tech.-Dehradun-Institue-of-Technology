//Write a C program to convert decimal number into binary number.
#include<conio.h>
#include<stdio.h>
int main()
{
	int l, cdec, dec, bin = 0, rbin = 0;
	clrscr();
	printf("Enter decimal number\n");
	scanf("%d", &dec);
	cdec = dec;
	while (cdec>0)
	{   	l = cdec%2;
		rbin = rbin*10+l;
		cdec = cdec/2;
	}
	while(rbin!=0)
	{
		l = rbin%10;
		bin = bin*10+l;
		rbin=rbin/10;
	}
	printf("Decimal eguivalent of %d is %d", dec, bin);
	return 0;
}



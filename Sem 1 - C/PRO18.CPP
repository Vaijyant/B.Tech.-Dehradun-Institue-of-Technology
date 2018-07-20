//Program 17 : convert a binary number to decimal
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int bi, dec=0, cbi, c, p=0;
	printf("Enter a binary number to convert it into a decimal number\n");
	scanf("%d", &bi);
	cbi = bi;
	while(cbi!=0)
	{
	 c=cbi%10;
	 dec = dec+(c*(pow(2,p)));
	 cbi = cbi/10;
	 p++;
	}
	printf("Decimal equivalent of %d is %d", bi, dec);
	getch();
}


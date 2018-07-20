//Write a Program to convert Decimal to Hexadecimal number system.
#include<stdio.h>
int main()
{
	int dec, cdec, hex, l[10], i=0, j;
	clrscr();
	printf("Enter a decimal number\n");
	scanf("%d", &dec);
	cdec = dec;
	while (cdec!=0)
	{
		l[i]=cdec%16;
		cdec=cdec/16;
		i++;
	}
	l[i]='\0';
	printf("Hexadecimal equivalent of %d is = ", dec);
	for(j=(i-1); j>=0; j--)
	{
		if (l[j]>=10)
		{
			switch (l[j])
			{
				case 10: printf("A"); break;
				case 11: printf("B"); break;
				case 12: printf("C"); break;
				case 13: printf("D"); break;
				case 14: printf("E"); break;
				case 15: printf("F"); break;
			}
		}
		else
			printf("%d", l[j]);
	}
	return 0;
}

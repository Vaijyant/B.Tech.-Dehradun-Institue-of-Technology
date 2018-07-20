#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	float arr[5], sum = 0, eabs=0, erel, eper;
	int sig[5], i;
	clrscr();
	printf("Enter floating point numbers and their significant numbers\n");
	printf("Number\t\tsignificant digits after decimal\n");
	for (i=0; i<5; i++)
	{
		scanf("%f %d", &arr[i], &sig[i]);
		sum = sum + arr[i];
		eabs = eabs + 0.5*pow(10, (-1*sig[i]));
	}
	printf("\nSum = %f\n", sum);
	erel = eabs/sum;
	eper = erel*100;
	printf("\n\nAbsolute error = %f", eabs);
	printf("\nRelative = %f", erel);
	printf("\nPercentage error = %f%", eper);
	getch();
}

#include<conio.h>
#include<math.h>
#include<stdio.h>
void main()
{
	int x[6], h, i, c=30; float  dTable[6][6];
	clrscr();
	printf("The objective of this program is to implement Newton forward interpolation formula\n");
	printf("In this program value of x starts from 30 upto 55, with a difference of 5\n");
	for(i=0; i<6; i++)
	{
		x[i] = c;
		dTable[0][i] = sin(((3.14/180)*c)); c=c+5;
	}
	for(h = 0; h<6; h++)
	{
		for (i=0; i<(6-h); i++)
		{
			dTable [(h+1)][i] = dTable[h][(i+1)] - dTable[h][i];
		}
	}
	printf("Forward difference table is\n");
	printf("y\t\t2y\t\t3y\t\t4y\t\t5y\n");
	for(h=0; h<6; h++)
	{
		for(i=1; i<5-h; i++)
		{
			printf("%f\t", dTable[i][h]);
		}
		printf("\n");


	}
	getch();
}
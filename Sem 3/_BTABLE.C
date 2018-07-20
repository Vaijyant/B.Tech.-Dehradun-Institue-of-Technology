#include<conio.h>
#include<math.h>
#include<stdio.h>
void main()
{
	int i, x[5], h, k, l=-1, dTable[5][5];
	clrscr();
	x[0] = 0;
	printf("The objective of this program is to implement Newton forward interpolation formula\n");
	printf("The equation is xý +2x + 1\nEnter value of h: ");
	scanf("%d", &k);

	printf("x\ty\n");
	for(i=0; i<5; i++)
	{
		x[(i+1)] =  x[i]+k;
		dTable[0][i] = pow(x[i], 2) + 2*x[i] + 1;
		printf("%d\t%d\n", x[i], dTable[0][i]);
	}
	for(h = 0; h<5; h++)
	{
		for (i=0; i<(5-h); i++)
		{
			dTable [(h+1)][i] = dTable[h][(i+1)] - dTable[h][i];
		}
	}
	printf("Forward difference table is\n ");
	printf("y\t2y\t3y\t4y\n");
	for(h=0; h<5; h++)
	{
		for(i=1; i<5-h; i++)
		{
			printf("%d\t", dTable[i][h]);
		}
		printf("\n");

	}
	printf("Backward difference table is\n");
	printf("y\t2y\t3y\t4y\n");
	for(h=1; h<5; h++ )
	{
		l++;
		for(i=0; i<h; i++)
		{
			if(l == (h+i))
			{
				printf("%d\t", dTable[h][i]);
			}
			printf("\n");
		}



		printf("\n");

	}

	getch();
}
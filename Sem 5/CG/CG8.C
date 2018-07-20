#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gdriver=DETECT, gmode, errorcode;
	int tm[3][3], om[3][3], rom[3][3], i, j, k, c=1;
	clrscr();
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	printf("This is a program to demonstrate translation of a triangle\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i==j)
			{
				tm[i][j]=1;

			}
			else
			{
				tm[i][j]=0;
			}
		}
	}
	printf("Enter the 1st codinate: ");
	scanf("%d %d", &om[0][0], &om[1][0]);
	printf("Enter the 2nd coordinate: ");
	scanf("%d %d", &om[0][1], &om[1][1]);
	printf("Enter the 3rd codinate: ");
	scanf("%d %d", &om[0][2], &om[1][2]);
	om[2][0]=1;
	om[2][1]=1;
	om[2][2]=1;


	line(om[0][0], om[1][0], om[0][1], om[1][1]);
	line(om[0][1], om[1][1], om[0][2], om[1][2]);
	line(om[0][2], om[1][2], om[0][0], om[1][0]);

	do
	{
	printf("Enter the value for tx, ty: ");
	scanf("%d %d", &tm[0][2], &tm[1][2]);

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			rom[i][j]=0;
			for(k=0; k<3; k++)
			{

				rom[i][j] = rom[i][j]+tm[i][k]*om[k][j];
			}
		}
	}

	line(rom[0][0], rom[1][0], rom[0][1], rom[1][1]);
	line(rom[0][1], rom[1][1], rom[0][2], rom[1][2]);
	line(rom[0][2], rom[1][2], rom[0][0], rom[1][0]);

	printf("Do you want to translate again? y=1/n=0: ");
	scanf("%d", &c);
	}
	while(c==1);
	printf("press any key to exit!");

	getch();

}

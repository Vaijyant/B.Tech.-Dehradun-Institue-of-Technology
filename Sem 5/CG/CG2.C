//2. Bresenham line algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gdriver = DETECT, gmode, errorcode;
	int x, y, x1, y1, x2, y2, dx, dy, e, i=0;
	clrscr();
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

	printf("Program to demonstrate Bresenhem's Line Algorithm\n\n");
	printf("Enter the start point\n");
	scanf("%d %d", &x1, &y1);
	printf("Enter the end point\n");
	scanf("%d %d", &x2, &y2);

	dx = abs(x2-x1);
	dy = abs(y2-y1);

	x = x1;
	y = y1;

	e = 2*dy - dx;

	while(i<= dx)
	{
		printf("%d %d\t\t", x, y);
		putpixel(x, y, WHITE);
		while(e >=0)
		{
			y = y+1;
			e = e - 2*dx;
		}
		x = x+1;
		e = e+2*dy;
		i++;
	}
	getch();
}
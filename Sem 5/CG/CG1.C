//1. DDA Line algorithm
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gdriver = DETECT, gmode, errorcode;
	int x, y, x1, y1, x2, y2, dx, dy, l, i=1, signX, signY;
	clrscr();
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

	printf("Program to demonstrate Digital Differential Analyzer Algorithm\n\n");
	printf("Enter the starting co-ordinates\n");
	scanf("%d %d", &x1, &y1);
	printf("Enter the end coordinates\n");
	scanf("%d %d", &x2, &y2);
	dx = abs(x2-x1);
	dy = abs(y2-y1);

	if(x2-x1 < 0)
		signX = -1;
	else if (x2-x1 > 0)
		signX = +1;
	else
		signX = 0;

	if(y2-y1 < 0)
		signY = -1;
	else if (y2-y1 > 0)
		signY = 1;
	else
		signY = 0;

	if(dx > dy)
		l = dx;
	else
		l = dy;


	dx = dx/l;
	dy = dy/l;

	x = x1 + 0.5*signX;
	y = y1 + 0.5*signY;

	while(i<=l)
	{
		putpixel(x, y, WHITE);
		x = x + dx;
		y = y + dy;
		i++;
	}
	getch();


}


#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gdriver = DETECT, gmode, errorcode;
	int midx, midy, i;
	int radius, outcol = WHITE;
	clrscr();
	initgraph(&gdriver, &gmode, "");
	printf("Enter centre coordinates: ");
	scanf("%d %d", &midx, &midy);
	printf("Enter radius for the circle:");
	scanf("%d", &radius);
	setcolor(outcol);
		circle(midx, midy, radius);
		radius = radius - 20;
		setfillstyle(CLOSE_DOT_FILL, WHITE);
		floodfill(midx, midy, WHITE);
		getch();

}
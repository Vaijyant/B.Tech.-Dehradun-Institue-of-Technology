#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gdriver = DETECT, gmode, errorcode;
	int midx, midy, i;
	int radius, outcol = 5;
	clrscr();
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	printf("Enter centre coordinates: ");
	scanf("%d %d", &midx, &midy);
	printf("Enter radius for the circle:");
	scanf("%d", &radius);
	for(i=0; i<5;i++)
{


		setcolor(outcolor);
		circle(midx, midy, radius);
		setfillstyle(CLOSE_DOT_FILL, WHITE);
		floodfill(midx, midy, WHITE);
		radius = radius - 20;
		outcolor=outcolor+10;
		getch();

}
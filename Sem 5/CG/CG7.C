#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void flood_fill(int x, int y, int fcol, int bcol)
{
	if(getpixel(x, y)==bcol && getpixel(x, y)!=fcol)
	{
		putpixel(x, y, fcol);
		flood_fill(x-1, y, fcol, bcol);
		flood_fill(x-1, y-1, fcol, bcol);
		flood_fill(x, y-1, fcol, bcol);
		flood_fill(x+1, y-1, fcol, bcol);
		flood_fill(x+1, y, fcol, bcol);
		flood_fill(x+1, y+1, fcol, bcol);
		flood_fill(x, y+1, fcol, bcol);
		flood_fill(x-1, y+1, fcol, bcol);
	}

}

void main()
{
	int gdriver=DETECT, gmode, errorcode;
	int tlx, tly, brx, bry, mx, my, fcol, bcol;
	clrscr();
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	printf("Enter top left points of rectangle: ");
	scanf("%d %d", &tlx, &tly);
	printf("Enter bottom right points of rectangle: ");
	scanf("%d %d", &brx , &bry);
	mx=(tlx+brx)/2;
	my=(tly+bry)/2;


	rectangle(tlx, tly, brx, bry);
	fcol= RED;
	bcol=BLACK;

	flood_fill(mx, my, fcol, bcol);

	getch();
}
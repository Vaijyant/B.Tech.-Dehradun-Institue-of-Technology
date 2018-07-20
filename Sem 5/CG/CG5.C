#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void plotpixel(int x, int y, int xc, int yc)
{
	int col = WHITE;
	putpixel(x+xc, y+yc, col);
	putpixel(y+xc, x+yc, col);
	putpixel(y+xc, -1*x+yc, col);
	putpixel(x+xc, -1*y+yc, col);
	putpixel(-1*x+xc, -1*y+yc, col);
	putpixel(-1*y+xc, -1*x+yc, col);
	putpixel(-1*y+xc, x+yc, col);
	putpixel(-1*x+xc, y+yc, col);
}
void midpoint(int xc, int yc, int r)
{
	int p, x=0, y=r;

	p = (1-r);

	do
	{
		plotpixel(x, y, xc, yc);
		if(p<0)
		{
			x=x+1;
			p= p + 2*x + 1;
		}
		else
		{
			x=x+1; y=y-1;
			p = p + 2*x - 2*y + 1;
		}
	}while(x<=y);


}
void main()
{
	int gdriver=DETECT, gmode, errorcode;
	int x, y, r;
	clrscr();
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	printf("This is a program to implement Mid-point circle drawing algorithm\n");
	printf("Enter the values of centre co-ordinates\n");
	scanf("%d %d", &x, &y);
	printf("Enter the value for the radius\n");
	scanf("%d", &r);
	midpoint(x, y, r);
	getch();

}

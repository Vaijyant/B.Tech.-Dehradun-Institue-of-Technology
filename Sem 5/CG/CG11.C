
#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void boundfill4(int x,int y,int fill,int boundary);
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
line(50,50,100,50);
line(100,50,100,100);
line(100,100,50,100);
line(50,100,50,50);

boundfill4(51,51,10,15);
getch();


}

void boundfill4(int x,int y,int fill,int boundary)
{
int current;
current = getpixel(x,y);
if( (current != boundary) && (current != fill) )
{
delay(2);
putpixel(x,y,fill);
boundfill4(x+1,y,fill,boundary);
boundfill4(x-1,y,fill,boundary);
boundfill4(x,y+1,fill,boundary);
boundfill4(x,y-1,fill,boundary);
boundfill4(x+1,y+1,fill,boundary);
boundfill4(x-1,y+1,fill,boundary);
boundfill4(x+1,y-1,fill,boundary);
boundfill4(x-1,y+1,fill,boundary);
}
}

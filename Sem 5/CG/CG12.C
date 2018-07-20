#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main(){

float xmin,ymin,xmax,ymax;
float x1,y1,x2,y2;
float  x1n,y1n,x2n,y2n;
float m;
int p1[4],p2[4],i;
/* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
clrscr();

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
   for(i=0;i<4;i++)
   {p1[i]=0;
   p2[i]=0;
   }
   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   printf("Enter the leftmost coordinate");
scanf("%f%f",&xmin,&ymin);
printf("Enter the rightmost coordinate");
scanf("%f%f",&xmax,&ymax);
rectangle(xmin,ymin,xmax,ymax);
printf("enter the coordinates for line");
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
m=((y2-y1)/(x2-x1));
line(x1,y1,x2,y2);
if(x1<xmin)
p1[0]=1;
else if(x1>xmax)
p1[1]=1;
else if(y1<ymin)
p1[2]=1;
else if(y1>ymax)
p1[3]=1;
if(x2<xmin)
p2[0]=1;
else if(x2>xmax)
p2[1]=1;
else if(y2<ymin)
p2[2]=1;
else if(y2>ymax)
p2[3]=1;
if(p1[0]==0&&p1[1]==0&&p1[2]==0&&p1[3]==0&&p2[0]==0&&p2[1]==0&&p2[2]==0&&p2[3]==0)
printf("Line is completely visible");
else if(p1[0]&p2[0]==1||p1[1]&p2[1]==1||p1[2]&p2[2]==1||p1[3]&p2[3]==1)
printf("Line is completely invisible");
else{
printf("Line is partially visible");
if(p1[0]==0&&p1[1]==0&&p1[2]==0&&p1[3]==0)
{if(x2<xmin)
{x2n= xmin;
y2n=m*(x2n-x2)+y2;
}
else if(x2>xmax)
{x2n= xmax;
y2n=m*(x2n-x2)+y2;
}
else if(y2<ymin)
{y2n= ymin;
x2n=(y2n-y2)/m+x2;
}
else if(y2>ymax)
{y2n= ymax;
x2n=(y2n-y2)/m+x2;
}
x1n=x1;
y1n=y1;
}
else if(p2[0]==0&&p2[1]==0&&p2[2]==0&&p2[3]==0)
{if(x1<xmin)
{x1n= xmin;
y1n=m*(x1n-x1)+y1;
}
else if(x1>xmax)
{x1n= xmax;
y1n=m*(x1n-x1)+y1;
}
else if(y1<ymin)
{y1n= ymin;
x1n=(y1n-y1)/m+x1;
}
else if(y1>ymax)
{y1n= ymax;
x1n=(y1n-y1)/m+x1;
}
x2n=x2;
y2n=y2;
}
else{

if(x2<xmin)
{x2n= xmin;
y2n=m*(x2n-x2)+y2;
}
else if(x2>xmax)
{x2n= xmax;
y2n=m*(x2n-x2)+y2;
}
else if(y2<ymin)
{y2n= ymin;
x2n=(y2n-y2)/m+x2;
}
else if(y2>ymax)
{y2n= ymax;
x2n=(y2n-y2)/m+x2;
}
if(x1<xmin)
{x1n= xmin;
y1n=m*(x1n-x1)+y1;
}
else if(x1>xmax)
{x1n= xmax;
y1n=m*(x1n-x1)+y1;
}
else if(y1<ymin)
{y1n= ymin;
x1n=(y1n-y1)/m+x1;
}
else if(y1>ymax)
{y1n= ymax;
x1n=(y1n-y1)/m+x1;
}
}
}
delay(500);
cleardevice();
printf("After clipping");
rectangle(xmin,ymin,xmax,ymax);
line(x1n,y1n,x2n,y2n);





   getch();
   closegraph();

}

#include<stdio.h>
#include<conio.h>
#define s 3.14
void main()
{
 float l,w,r,area_r,area_c;
 clrscr();
 printf("\nenter length = ");
 scanf("%f",&l);
 printf("\nenter width = ");
 scanf("%f",&w);
 printf("\nenter radius = ");
 scanf("%f",&r);
 area_r=l*w;
 area_c=s*r*r;
 printf("\n\narea of rectangle = %.2f",area_r);
 printf("\n\narea of circle = %.2f",area_c);
 getch();
 }



































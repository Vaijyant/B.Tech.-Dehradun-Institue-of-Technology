#include<stdio.h>
#include<conio.h>
void main()
{
float d,feet,inch,cm;
clrscr();
printf("\nenter distence b/w 2 city = ");
scanf("%f",&d);
cm=d*100000;
inch=cm/12;
feet=inch/12;
printf("\n\ndistence =%f km",d);
printf("\n\ndistence in centimeter =%f cm",cm);
printf("\n\ndistence in inches =%f''",inch);
printf("\n\ndistence in feet =%f feet",feet);
getch();
}







































































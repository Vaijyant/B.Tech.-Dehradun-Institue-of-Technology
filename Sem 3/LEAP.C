#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("\nenter any year = ");
scanf("%d",&year);
if(year%100==0 && year%400==0)
{
  if(year%4==0)
   printf("\n\n\tleap year");
  else
   printf("\n\n\t\tnot");
}
else if(year%4==0)
{
printf("\n\n\tleap year");
}
else
{
 printf("\n\n\t\tnot");
}
getch();
}

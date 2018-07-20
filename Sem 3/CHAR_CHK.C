#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("\nenter any character = ");
scanf("%c",&c);
if(c>=65 && c<=90)
 printf("\n\n\t Capital letter");
else if(c>=47 && c<=58)
 printf("\n\n\t numeric values");
else if(c>=97 && c<122)
 printf("\n\n\t small letter");
else
 printf("\n\n\t special symbol");
 getch();
 }









































































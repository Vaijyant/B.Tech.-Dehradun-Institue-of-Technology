#include<stdio.h>
#include<conio.h>
void main()
{
char *ch;

clrscr();
printf("\n\n\tenter any string = ");
scanf("%[^\n]s",ch);
while(*ch!='\0')
{
printf("\n\t\t%c ",*ch);
ch++;
}
getch();
}










































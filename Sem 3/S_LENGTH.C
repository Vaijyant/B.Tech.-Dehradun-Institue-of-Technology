#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,l=0;
clrscr();
printf("\n\n Enter any string = ");
gets(a);
for(i=0;a[i]!='\0';i++)
 l++;
printf("\n\n\n\tlength of string is => %d",l);
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i;
clrscr();
printf("\n\n Enter any string = ");
gets(a);
printf("\n\n\narray element in next line \n\n\n");
for(i=0;a[i]!='\0';i++)
{
 printf("\n\t\t %c",a[i]);
}
getch();
}



























































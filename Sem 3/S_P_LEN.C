#include<stdio.h>
#include<conio.h>
void main()
{
char *ch,*ch1;
int l=0,i;
clrscr();
printf("\n\n\tenter any string = ");
scanf("%[^\n]s",ch);
for(;*ch!='\0';ch++)
{
l++;
}
printf("\n\n\t length of string = %d",l);
getch();
}
























































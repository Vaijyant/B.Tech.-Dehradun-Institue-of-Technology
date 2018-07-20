#include<stdio.h>
#include<conio.h>
void main()
{
char *ch;
int l=0,i,f=0;
clrscr();
printf("\n\n\tenter any string = ");
scanf("%[^\n]s",ch);
for(;*ch!='\0';ch++)
{
l++;
}
ch--;
while(l-1>=0)
{
if(*ch>=97&&*ch<=122)
{
*ch=*ch-32;
}
ch--;
l--;
}
ch++;
printf("\n\n\tstring in upper case = %s",ch);
getch();
}

















































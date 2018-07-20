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
ch--;
i=l;
do
{
*ch1=*ch;
ch1++;
ch--;
l--;
}while((l-1)>=0);
ch1++;
*ch1='\0';
while(i>=0)
{
i--;
ch1--;
}
printf("\n\n\treverse string is = %s",ch1);
getch();
}

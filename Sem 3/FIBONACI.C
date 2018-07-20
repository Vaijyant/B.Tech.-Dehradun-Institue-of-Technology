#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c;
clrscr();
c=a+b;
printf("\n\n\n %d %d",a,b);
do
{
printf(" %d",c);
a=b;
b=c;
c=a+b;
}while(c<=80);
getch();
}































































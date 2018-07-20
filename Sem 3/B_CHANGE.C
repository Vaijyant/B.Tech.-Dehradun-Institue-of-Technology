#include<stdio.h>
#include<conio.h>
void main()
{
int c,d,t;
clrscr();
printf("enter value of c = ");
scanf("%d",&c);
printf("enter value of d = ");
scanf("%d",&d);
t=c;
c=d;
d=t;
printf("after change value of \nc = %d \nd = %d",c,d);
getch();
}









































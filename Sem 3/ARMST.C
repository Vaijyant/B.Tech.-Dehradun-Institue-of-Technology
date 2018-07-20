#include<stdio.h>
#include<conio.h>
void main()
{
int no,arms=0,no1,a;
clrscr();
printf("\nenter any digit = ");
scanf("%d",&no);
no1=no;
while(no>0)
{
a=no%10;
arms=arms+a*a*a;
no=no/10;
}
if(arms==no1)
{
printf("\n\n\t armstrong no");
}
else
{
printf("\n\n\t\t not");
}
getch();
}


































#include<stdio.h>
#include<conio.h>
void main()
{
int no,rev=0,no1,a;
clrscr();
printf("\nenter any digit = ");
scanf("%d",&no);
no1=no;
while(no>0)
{
a=no%10;
rev=rev*10+a;
no=no/10;
}
printf("\n\n\n\t reverse = %d",rev);
if(rev==no1)
{
printf("\n\n\t palendrom no");
}
else
{
printf("\n\n\t\t not");
}
getch();
}



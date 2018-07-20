#include<stdio.h>
#include<conio.h>
void main()
{
int no,sum=0,no1,a;
clrscr();
printf("\nenter any digit = ");
scanf("%d",&no);
no1=no%10;
no=no/10;
while(no>0)
{
a=no%10;
sum=sum+a;
no=no/10;
}
if(sum==no1)
{
printf("\n\n\t handsome no");
}
else
{
printf("\n\n\t\t not");
}
getch();
}





































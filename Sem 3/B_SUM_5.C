#include<stdio.h>
#include<conio.h>
void main()
{
int no,n1,n2,n3,n4,n5,sum=0;
clrscr();
printf("\nenter any five digit no. = ");
scanf("%d",&no);
n1=no%10;
no=no/10;
n2=no%10;
no=no/10;
n3=no%10;
no=no/10;
n4=no%10;
n5=no/10;
sum=n1+n2+n3+n4+n5;
printf("\nsum of all digit = %d",sum);
getch();
}

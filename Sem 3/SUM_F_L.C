#include<stdio.h>
#include<conio.h>
void main()
{
int no,f,l,sum;
clrscr();
printf("\nenter any 4 digit no. = ");
scanf("%d",&no);
l=no%10;
f=no/1000;
printf("\nfirst  digits =%d\n\n\nlast digit =%d",f,l);
sum=f+l;
printf("\n\n sumof first and last digit = %d",sum);
getch();
}


















































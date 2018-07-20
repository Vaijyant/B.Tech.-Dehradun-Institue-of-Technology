#include<stdio.h>
#include<conio.h>
void fibo(int,int);
int c;
void main()
{
int a=0,b=1;
clrscr();
printf("\n\n\t %d %d",a,b);
fibo(a,b);
getch();
}

void fibo(int a,int b)
{
c=a+b;
if(c<=50)
{
printf(" %d",c);
a=b;
b=c;
fibo(a,b);
}
}
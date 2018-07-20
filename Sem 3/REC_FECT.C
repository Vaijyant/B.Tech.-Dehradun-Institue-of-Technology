#include<stdio.h>
#include<conio.h>
void fect(int );
int f=1;
void main()
{
int no;
printf("\n\n\t enter any no = ");
scanf("%d",&no);
fect(no);
getch();
}

void fect(int x)
{
if(x>=1)
{
f=f*x;
x--;
fect(x);
}
else
{
printf("\n\n\t fectorial = %d ",f);
}
}
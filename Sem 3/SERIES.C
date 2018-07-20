#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
float s=0,f=1;
clrscr();
//calculate 1/1! +2/2! +3/3!.....
printf("\n\n\n");
for(i=1;i<=6;i++)
{
f=1;
for(j=1;j<=i;j++)
 {
  f=f*j;
 }
printf(" %d/%d! +",i,i);
s=s+(i/f);
}
printf("\n\n\n\n\t\tsum = %.2f ",s);
getch();
}


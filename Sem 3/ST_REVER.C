#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i,l=0,k=0;
clrscr();
printf("\n\n Enter any string = ");
gets(a);
for(i=0;a[i]!='\0';i++)
l++;
for(i=l-1;i>=0;i--)
{
b[k]=a[i];
k++;
 }
 b[l]='\0';
printf("\n\n\n reverse string \n\n\n\t\t");
puts(b);
getch();
}








































































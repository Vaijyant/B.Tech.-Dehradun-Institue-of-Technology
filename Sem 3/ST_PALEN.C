#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i,k=0,l=0;
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
//getch();
for(i=0;a[i]!='\0';i++)
 {
  if(a[i]!=b[i])
  k=0;
 }
 if(k==0)
 {
  printf("\n\n\t not a palendrom string");
  }
 else
 {
 printf("\n\n\t    palendrom string");
 }
 getch();
 }































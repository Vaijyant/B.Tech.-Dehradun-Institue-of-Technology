#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,l=0;
clrscr();
printf("\n\n Enter any string = ");
gets(a);
for(i=0;a[i]!='\0';i++)
 {
 if(a[i]>=97 &&a[i]<=122)
  {
  a[i]=a[i]-32;
  }
 }
printf("\n\n\n stringin Capital letter \n\n\n\t\t");
puts(a);
getch();
}
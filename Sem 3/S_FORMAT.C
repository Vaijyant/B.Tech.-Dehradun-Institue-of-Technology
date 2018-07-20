#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,k=0,l=0;
clrscr();
printf("\n\n Enter any string = ");
gets(a);
for(i=0;a[i]!='\0';i++)
{
 if(a[0]>=97&&a[0]<=122)
 {
  a[i]=a[i]-32;
 }
 else if(a[i]==' ')
 {
  a[i+1]=a[i+1]-32;
 }
 else
  continue;
}
printf("\n\n\n After conversion the string is \n\n\n\t\t");
puts(a);
getch();
}










































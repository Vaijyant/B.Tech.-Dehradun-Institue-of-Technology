#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i,k=0,l=0;
clrscr();
printf("\n\n Enter first string = ");
gets(a);
printf("\n\n Enter second string = ");
gets(b);

for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=0;b[i]!='\0';i++)
{
a[i+l]=b[i];
}
a[l+i]='\0';
printf("\n\n\n After Concatenation the string is \n\n\n\t\t");
puts(a);
getch();
}





























































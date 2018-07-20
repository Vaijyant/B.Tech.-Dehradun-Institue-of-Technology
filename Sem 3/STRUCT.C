#include<stdio.h>
#include<conio.h>
struct stud
{ int roll;
char nm[30];
}s[2];
void main()
{
int l,i;
clrscr();
for(i=0;i<2;i++)
{
printf("\n\n\tenter roll no. of %d student = ",i);
scanf("%d",&s[i].roll);
printf("\n\n\tenter name of %d student = ",i);
scanf("%s",s[i].nm);
}

for(i=0;i<2;i++)
{
printf("\n\n\t roll no. of %d student = %d",i,s[i].roll);
printf("\n\n\t name of %d student = %s",i,s[i].nm);
}
getch();
}





























































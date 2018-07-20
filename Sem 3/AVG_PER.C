#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3,m4,m5,tot;
float avg,per;
char nm[20];
clrscr();
printf("\n\nenter the name of student = ");
scanf("%s",nm);
printf("\nenter marks of 5 subject = ");
scanf("%d",&m1);
scanf("%d",&m2);
scanf("%d",&m3);
scanf("%d %d",&m4,&m5);
tot=m1+m2+m3+m4+m5;
printf("\n\n%s your ",nm);
printf("\n\ntotal = %d",tot);
avg=tot/5;
printf("\naverage = %.f",avg);
per=tot*(.2);
printf("\n percentage = %.2f",per);
getch();
}

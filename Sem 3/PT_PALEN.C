#include<stdio.h>
#include<conio.h>
void main()
{
char *ch,*ch1;
int l=0,i,f=0;
clrscr();
printf("\n\n\tenter any string = ");
scanf("%[^\n]s",ch);
for(;*ch!='\0';ch++)
{
l++;
}
ch--;
i=l;
do
{
*ch1=*ch;
ch1++;
ch--;
l--;
}while((l-1)>=0);
ch++;
ch1++;
*ch1='\0';
while(i>=0)
{
i--;
ch1--;
}

printf("\n\n\treverse string is = %s",ch1);
while(*ch!='\0')
{
 printf("\nch =%c ch1=%c",*ch,*ch1);
 getch();
 if(*ch!=*ch1)
 {
  f=1;
 // break;
 }
ch++;
ch1++;
}
 if(f==1)
 {
  printf("\n\n\n\t not a palendrom string");
  }
 else
 {
 printf("\n\n\n\t    palendrom string");
 }
 getch();

}
























































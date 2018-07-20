#include<stdio.h>
#include<conio.h>
void main()
{
float carbon,hardness,strength;
clrscr();
printf("\n enter hardness = ");
scanf("%f",&hardness);
printf("\n enter Carbon content = ");
scanf("%f",&carbon);
printf("\n enter tensile strength  = ");
scanf("%f",&strength);

if(hardness>=50 && carbon<=.7 && strength>5600)
  printf("\n\n\tgrade 10");
else if(hardness>=50 && carbon<=.7)
  printf("\n\n\tgrade 9");
else if(carbon<=.7 && strength>5600)
  printf("\n\n\tgrade 8");
else if(hardness>=50 && strength>5600)
  printf("\n\n\tgrade 7");
else if(hardness>=50 || carbon<=.7 || strength>5600)
  printf("\n\n\tgrade 6");
else
printf("\n\n\t grade 5");
getch();
}




























































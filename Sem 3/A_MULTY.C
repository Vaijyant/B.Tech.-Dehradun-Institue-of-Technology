#include<stdio.h>
#include<conio.h>
void main()
{
static int a[2][2],b[2][2],m[2][2];

int i,j,k;
clrscr();
printf("\n\nenter first array's elements = ");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
  {
  scanf("%d",&a[i][j]);
  }
}
printf("\n\nenter second array's elements = ");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
  {
  scanf("%d",&b[i][j]);
  }
}

for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
  {
  for(k=0;k<2;k++)
   {
   m[i][j]=m[i][j]+a[i][k]*b[k][j];
   }
  }
}
printf("\n\n after multiply elements are\n\n ");

for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
  {
   printf("   %d",a[i][j]);
  }
  printf("\n");
}
  printf("\n\n\t*\n\n");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
  {
   printf("   %d",b[i][j]);
  }
  printf("\n");
}
  printf("\n\n");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
  {
   printf("   %d",m[i][j]);
  }
  printf("\n");
}
getch();
}
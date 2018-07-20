#include<stdio.h>
#include<conio.h>
void main()
{
static int a[3][3],p[3],s[3];
int i,j;
clrscr();
printf("\n\nenter array's elements = ");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
  scanf("%d",&a[i][j]);
  }
}
  for(i=1;i<=3;i++)
    printf("   p%d",i);

  printf("   s_man\n");

  for(i=0;i<3;i++)
    printf("---------");
       printf("\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
    printf("%4d",a[i][j]);
    s[i]=s[i]+a[i][j];
    p[i]=p[i]+a[j][i];
    }
   printf("     I%4d",s[i]);
   printf("\n");
  }
  printf("---------------------------\n");
  printf("p");


  for(i=0;i<3;i++)
  {
   printf("%4d",p[i]);
  }
  getch();

}
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
float v[50],w[50],p[50],wei,t,max;
clrscr();
printf("enter the number of items=");
scanf("%d",&n);
printf("enter the weight of items=\n");
for(i=0;i<n;i++)
scanf("%f",&w[i]);
printf("enter the profit of items=\n");
for(i=0;i<n;i++)
scanf("%f",&v[i]);
printf("enter the capacity of the bag=");
scanf("%f",&wei);
for(i=0;i<n;i++)
p[i]=v[i]/w[i];
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(p[i]<p[j])
{
t=p[i];
p[i]=p[j];
p[j]=t;
t=w[i];
w[i]=w[j];
w[j]=t;
t=v[i];
v[i]=v[j];
v[j]=t;
}
}
}
printf("\n\n");
i=0;
max=0;
while(wei>0)
{
max=max+v[i];
t=wei;
wei=wei-w[i];
i++;
}
wei=wei+w[i-1];
max=max-v[i-1];
max=max+(wei*v[i-1]/w[i-1]);
printf("\nthe maximum profit is=%f",max);
getch();
}
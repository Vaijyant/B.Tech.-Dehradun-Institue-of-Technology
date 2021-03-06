#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
clock_t start,end;
int a[10000];
void makeheap(int a[],int n)
{
int i,val,s,f;
start = clock();
for(i=1;i<n;i++)
{
val=a[i];
s=i;
f=(s-1)/2;
while(s>0&&a[f]<val)
{
a[s]=a[f];
s=f;
f=(s-1)/2;
}
a[s]=val;
}
}
void heapsort(int a[],int n)
{
int i,s,f,ivalue;
for(i=n-1;i>0;i--)
{
ivalue=a[i];
a[i]=a[0];
f=0;
if(i==1)
s=-1;
else
s=1;
if(i>2&&a[2]>a[1])
s=2;
while(s>=0&&ivalue<a[s])
{
a[f]=a[s];
f=s;
s=2*f+1;
if(s+1<=i-1&&a[s]<a[s+1])
s++;
if(s>i-1)
s=-1;
}
a[f]=ivalue;
}
end=clock();
}
void main()
{
int i,n;
clrscr();
printf("Sorting using heapsort\n");
printf("Enter limit: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a[i]=rand();
printf("%d\t",a[i]);
}
makeheap(a,n);
heapsort(a,n);
printf("\n after sorting array elements are\t");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("The time was: %f\n", (end - start) / CLK_TCK);
getch();
}
